#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <random>

using namespace std;

//enum Class Gamble:unsigned int{Lost, Won};
enum Gambling{Win,Lose};

enum class Color { red, green = 20, blue };
Color r = Color::blue;

int main()
{
    //cout << rand() << "\n";

    Gambling value=Lose; // Assigning the values of enum variables to different variable gives compiler error

    srand( static_cast<unsigned int>(time(0)));

    if((rand() % 100) <= 50)
    {
        value=Lose;
    }
    else
    {
        value=Win;
    }

    
    cout << "srand with time(null):" << value << " " << rand() << endl; //This code is an example of enum type
    
    cout << "enum class:" << static_cast<int>(r) << endl; // This code is an example of class enum type

    /*
    After this section, includes new features comes with c++11.
    */

    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> randomInt(1,6);
    cout << "C++11 Random Engine Generator:" << randomInt( engine );
    return 0;
    
}