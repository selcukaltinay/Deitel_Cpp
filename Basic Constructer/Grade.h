#include <iostream>
#include <string.h>

class GradeBook{
    public:
        explicit GradeBook(std::string);
        void yazdir();
        std::string getBookName();
    private:
        std::string nameOfBook;
};
