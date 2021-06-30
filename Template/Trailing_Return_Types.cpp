/* More information https://cppstyle.wordpress.com/trailing-return-type/
*/

#include <iostream>

template<typename T, typename U>
class Fighter
{    
    T pvValue1;
    U pvValue2;

    public:
    Fighter(T value1)
    {
        pvValue1=value1;
    }

    Fighter(T value1, U value2)
    {
        pvValue1=value1;
        pvValue2=value2;
    }

    auto Damage()->decltype(pvValue1*pvValue2) // or we can write T*U
    {
        return pvValue1*pvValue2;
    }

    void getValue()
    {
        std::cout << pvValue1 << "\n";
    }
    
};

int main()
{
    Fighter<int,double> Selcuk(11,10.0);
    std::cout << Selcuk.Damage() << "\n";



    return 0;
}