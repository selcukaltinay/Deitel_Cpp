#include <iostream>
using namespace std;

int squareByValue(int);
void squareByReference(int &);

int main()
{
int valueSquareV=5;
int valueSquareR=6;

cout << "before the function, value is:" << valueSquareV << ". Function returns:" << squareByValue(valueSquareV) << ". After the function by ref, value is:" << valueSquareV << "\n";

cout << "before the function, value is:" << valueSquareR << ". Function returns: nothing (so return type is void)";
squareByReference(valueSquareR);
cout << ". After the function by ref, value is:" << valueSquareR << "\n";

return 0;
}

int squareByValue(int value)
{
    return value*value;
}

void squareByReference(int &value)
{
    value*=value;
}