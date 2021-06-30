#include <iostream>
#include <array>

int main()
{
    std::array<int, 5> items={1,2,3,4,5};
    
    //Using range based for
    for(int item : items)
    {
        std::cout << item << "\n";
    }

    std::cout << "_____" << std::endl;
    //Using range based for with reference
    for(int &item : items)
    {   
        item*=2;
        std::cout << item << "\n";
    }
    
    std::cout << "_____" << std::endl;
    //Reference effect
    for(int counter=0; counter<items.size(); ++counter)
    {
        std::cout << items[counter] << "\n";
    }

    return 0;
}