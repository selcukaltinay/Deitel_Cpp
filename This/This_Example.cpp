#include <iostream>

class Math{
public:

    Math(int num1, int num2) : number1(num1), number2(num2)
    {


    }

    Math& increase()
    {
        this->number1++;
        this->number2++;
        return *this;
    }

    void print()const
    {
        std::cout << "Number1 is:" << this->number1 << " Number2 is:" << this->number2 << "\n";
    }

    static void setValue(int num)
    {
        value=num;
    }

    static int getValue()
    {
        return value;
    }


private:
    int number1;
    int number2;
    static int value;
};



int main()
{
    Math MathClass(24,25);
    MathClass.print();
    MathClass.increase().increase().increase();
    MathClass.print();

    /*
    Static functions and variables
    */
    //std::cout << Math::getValue() << "\n";
    //Math::setValue(34);
    //std::cout << Math::getValue() << "\n";


    return 0;
}