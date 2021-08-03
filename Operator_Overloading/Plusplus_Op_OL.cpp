#include <iostream>

class MyClass{

    MyClass():value(10)
    {
        
    }
    
    MyClass &operator++(MyClass& myObject)
    {
        myObject.value=myObject.value+1;
        return myObject;
    }
    
    MyClass &operator++(MyClass& myObject, int)
    {

        
    }

private:
    int value;

};


int main()
{


    return 0;
}