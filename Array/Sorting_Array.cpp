#include <iostream>
#include <array>
#include <algorithm>

const size_t arraySize=8;
int main()
{
    bool found;

    std::array<std::string, arraySize> colors = {"red","orange","blue","yellow","black","white","purple","green"};

    std::sort(colors.begin(),colors.end());

    found = std::binary_search(colors.begin(), colors.end(), "yellow");

    std::cout << "yellow " << (found ? "was" : "was not") << " found" << "\n";
    
    found = std::binary_search(colors.begin(), colors.end(), "brown");

    std::cout << "brown " << (found ? "was" : "was not") << " found" << "\n";


    return 0;
}