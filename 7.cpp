#include <iostream>

// Write a function using the default argument that is able to add 2 or 3 numbers.

using namespace std;
int add(int x, int y, int z = 0)
{
    return x + y + z;
}

int main()
{
    int a = 1, b = 2, c = 3;
    cout << "Addition of two numbers is " << add(a, b) << endl;
    cout << "Addition of three numbers is " << add(a, b, c);

    return 0;
}