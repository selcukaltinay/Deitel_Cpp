#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    enum Gambling{Win,Lose};

    //cout << rand() << "\n";

    Gambling value=Lose;

    srand( static_cast<unsigned int>(time(0)));

    if((rand() % 100) <= 50)
    {
        value=Lose;
    }
    else
    {
        value=Win;
    }

    cout << value << " " << rand() << endl;
    
    return 0;
}