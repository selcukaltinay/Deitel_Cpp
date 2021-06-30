/*Keywords: Recursive call, recursion step
for performance demanding situations, use iteration instead of recursion.*/

#include <iostream>

unsigned long factorial(unsigned long);

int main()
{
    std::cout << factorial(5) << "\n";

    return 0;
}

unsigned long factorial(unsigned long number)
{
    if(number<=1)
        return 1;
    else
        return number*factorial(number-1);
}
