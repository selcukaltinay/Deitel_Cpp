#include <iostream>
#include <stdint.h>
#include <iomanip>
class Average
{
    public:
        Average(){
            int16_t score=0;
            while(score!=(-1))
            {
                std::cin >> score;
                if(score==(-1))
                    break;
                total+=score;
                ++counter;
            }
        }

        int32_t getAverage() const
        {
            return total/counter;


        }
        int32_t getTotal() const
        {
            return total;
        }
        
        float getFloatAverage() const
        {
            return static_cast<float>(total)/counter;
        }
    private:
        int32_t total=0;
        int16_t counter=0;




};

int main()
{
    Average ortalama;
    std::cout << ortalama.getAverage() << std::endl;
    std::cout << ortalama.getFloatAverage() << std::endl;
    return 0;
}

