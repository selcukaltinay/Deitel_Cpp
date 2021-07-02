#include <iostream>
#include <iomanip>

int cTypeArray[]={1,3,5,7};

int sumElements(const int [], int);
/*
int sumElements(const int *, int); //same with above
*/
int main()
{

    std::cout << sumElements(cTypeArray,4) << "\n";

    return 0;
}

int sumElements(const int iArray [], int numberOfElements)
{
    int sum=0;
    for(int counter=0; counter < numberOfElements; ++counter)
    {
        sum+=iArray[counter];
    }
    return sum;
} 

/* same with above
int sumElements(const int *iArray, int numberOfElements) 
{
    int sum=0;
    for(int counter=0; counter < numberOfElements; ++counter)
    {
        sum+=iArray[counter];
    }
    return sum;
} 
*/