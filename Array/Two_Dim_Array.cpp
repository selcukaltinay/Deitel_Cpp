#include <iostream>
#include <array>
const int columns=3;
const int rows=2;

void printArray(const std::array<std::array<int, columns>, rows>& );
void sumArray(const std::array<std::array<int, columns>, rows>& );

int main()
{
    std::array< std::array<int, 3>, 2 > twoDimArray; // 2x3
    twoDimArray[0]={1,2,3}; // or we can write twoDimArray={1,2,3,4,5,6};
    twoDimArray[1]={4,5,6};

    printArray(twoDimArray);
    sumArray(twoDimArray);
    return 0;
}

void printArray(const std::array<std::array<int, columns>, rows>& a)
{
    for(std::array<int,3> const &row : a) // auto = std::array<int,3>;  instead of writing std::array, we can use auto 
        for(auto const &column : row) // auto = int 
            std::cout << column << "\n";
}

void sumArray(const std::array<std::array<int, columns>, rows>& a)
{
    int total=0;
    for(std::array<int,3> const &row : a) // auto = std::array<int,3>;  instead of writing std::array, we can use auto 
        for(auto const &column : row) // auto = int 
            total+=column;

    std::cout << "Total:" << total << "\n";
}

