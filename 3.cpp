#include <iostream>

// Define a function to calculate x raised to the power y.

using namespace std;

class power
{
public:
    int x, y;
    int powerr();
};

int power::powerr()
{
    int p = 1;
    for (int i = 0; i < y; i++)
    {
        p = p * x;
    }
    return p;
}

int main()
{
    power a;
    cout << "Enter Two Numbers\n";
    cin >> a.x >> a.y;
    int z = a.powerr();
    cout << a.x << " raised to the power " << a.y << " is " << z;

    return 0;
}