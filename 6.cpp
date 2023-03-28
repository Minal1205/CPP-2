#include <iostream>

// Define a function to swap data of two int variables using call by reference

using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 6, b = 5;
    cout << "Values before swap is a = " << a << " and b = " << b << endl;
    swap(a, b);
    cout << "Values after swap is a = " << a << " and b = " << b;

    return 0;
}