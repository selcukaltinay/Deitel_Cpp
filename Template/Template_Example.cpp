#include <iostream>

template<typename T>
class Fighter
{    
    T pvValue;
    public:
    Fighter(T value)
    {
        pvValue=value;
    }

    void getValue()
    {
        std::cout << pvValue << "\n";
    }
    
};

int main()
{
    Fighter<int> Selcuk(12);
    Selcuk.getValue();


    return 0;
}