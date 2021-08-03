#include <iostream>
#include <iomanip>
#include <string>

class PhoneNumber{
    friend std::ostream& operator<<(std::ostream &, const PhoneNumber&);
     
    friend std::istream& operator>>(std::istream &, PhoneNumber &);

    private:
        std::string areaCode;
        std::string excCode;
        std::string line;
};


int main()
{

    PhoneNumber MyPhone;
    std::cout << "Enter the phone number in the form (123) 456-7890:";
    
    std::cin >> MyPhone;
    std::cout << MyPhone;

    return 0;
}

std::ostream& operator<<(std::ostream &output, const PhoneNumber& phonenmbr)
{
    output << "(" << phonenmbr.areaCode << ")" << phonenmbr.excCode << "-" << phonenmbr.line;
    return output;
}

std::istream& operator>>(std::istream &input, PhoneNumber &phonenmbr)
{
    input.ignore();
    input >> std::setw(3) >> phonenmbr.areaCode;
    input.ignore(2);
    input >> std::setw(3) >> phonenmbr.excCode;
    input.ignore();
    input >> std::setw(4) >> phonenmbr.line;
    return input;
}
