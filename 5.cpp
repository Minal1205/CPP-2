#include <iostream>

// Define a function to check whether a given number is a term in a Fibonacci series or not.

using namespace std;
class fibonacci
{
public:
    int a = 0, b = 1, c, check, flag = 0;
    int fib();
};

int fibonacci::fib()
{
    cout << a << " " << b << " ";
    for (int i = 2; i <= check; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
        if (check == c || check == a || check == b)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        cout << endl
             << check << " is present in series";
    }
    else
        cout << endl
             << check << " is not present in series";
}

int main()
{
    fibonacci a;

    cout << "Enter Number To Check Whether it is Present or not in series\n";
    cin >> a.check;
    a.fib();

    return 0;
}