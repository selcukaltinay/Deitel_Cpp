#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>

void inputVector(std::vector<int> &);
void outputVector(std::vector<int> &);

int main()
{
    std::vector<int> varVector1(5);
    std::vector<int> varVector2(8);
    
    std::cout << "Size of Vector1:" << varVector1.size() << "\n";
    std::cout << "Size of Vector2:" << varVector2.size() << "\n";
    
    varVector1.push_back(2); // add 2 to end of the vector

    outputVector(varVector1);
    outputVector(varVector2);

    std::cout << varVector2.at(2) << std::endl; // accessing an index

    varVector2.pop_back(); // pop the last index
    std::cout << "at the beginning, vector had 8 member, now:" << varVector2.size() << std::endl;

    try
    {
        std::cout << varVector2.at(99) << "\n";
    }
    catch(out_of_range& ex)
    {
        std::cerr << "There is no member indexed as you wrote" << ex.what() << '\n';
    }

    return 0;
}

void outputVector(std::vector<int>& items)
{
    std::cout << "Vector contains:\n";
    for(auto item : items)
        std::cout << item << ",\n";

}

void inputVector(std::vector<int>& items)
{
    int counter=items.size();
    std::cout << "Enter vector values:";
    for(auto &item : items)
    {
        std::cin >> item;
        std::cout << "\t" << --counter <<" remained.";
    }
}