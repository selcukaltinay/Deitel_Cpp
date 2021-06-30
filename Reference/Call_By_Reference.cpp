#include <iostream>
using namespace std;

int squareByValue(int);
void squareByReference(int &);

int counter=1;
int &counterRef=counter;

int main()
{
int valueSquareV=5;
int valueSquareR=6;

cout << "Before the function, value is:" << valueSquareV << ". Function returns:" << squareByValue(valueSquareV) << ". After the function by ref, value is:" << valueSquareV << "\n";

cout << "Before the function, value is:" << valueSquareR << ". Function returns: nothing (so return type is void)";
squareByReference(valueSquareR);
cout << ". After the function by ref, value is:" << valueSquareR << "\n";


/* Increasing variable via reference
*/

cout << '\n' << "Counter Variable equals:" << counter << "\n";
++counterRef;
cout << '\n' << "Counter Variable equals:" << counter << " <- After increased by reference." << "\n";



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