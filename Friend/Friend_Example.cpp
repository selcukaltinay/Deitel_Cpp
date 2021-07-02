#include <iostream>


class MyClass{
        friend int countVar(MyClass &);
    public:
        MyClass(int number):maskedVar(number)
        {
            std::cout << "Basic Const." << "\n";

        }
    
    private:
        int maskedVar;




};

int countVar(MyClass &);


int main()
{
    MyClass frClass(25);
    std::cout << countVar(frClass);


    return 0;
}

int countVar(MyClass& friendClass)
{
    std::cout << friendClass.maskedVar << "\n";

    return EDOM;
}