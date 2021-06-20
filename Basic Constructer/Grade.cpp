#include <iostream>
#include "Grade.h"
#include <string.h>
 
    GradeBook::GradeBook(std::string name)
    {
        nameOfBook=name;
    }

    std::string GradeBook::getBookName()
    {
        return nameOfBook;
    }

    void GradeBook::yazdir()
    {
        std::cout <<"Yazdir"<< "\n";
        std::cout << nameOfBook << std::endl;
    }
