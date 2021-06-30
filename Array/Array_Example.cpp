#include <iostream>
#include <iomanip>
#include <array>

int cTypeArray[]={0,1,2,3,4,5,6,7,8,9};

int main()
{
    int a=5,b=2;
    std::array<int,10> cppTypeArray;

    std::cout << "cTypeArray[a+b]:" << cTypeArray[a+b] << "  <- a=5, b=2 \n";
    cTypeArray[a+b]+=1;
    std::cout << "cTypeArray[a+b]:" << cTypeArray[a+b] << "\n";

    cppTypeArray={0,1,2,3,4,5,6,7,8,9};
    std::cout << cppTypeArray[2] << "\n";
    std::cout << cppTypeArray.begin() << "\n";
    std::cout << cppTypeArray.end() << "\n";
    std::cout << cppTypeArray.size() << "\n";

  //  std::cout << "Size of Arrey:" << arrey.size() << "\n";

    return 0;
}