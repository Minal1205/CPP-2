#include <iostream>

// Define a function to find the highest value digit in a given number.

using namespace std;

class maximum
{
public:
    int n;
    int highest();
};

int maximum ::highest()
{
    int max = -1;
    while (n != 0)
    {
        int rem = n % 10;
        if (rem > max)
        {
            max = rem;
        }
        n = n / 10;
    }
    return max;
}

int main()
{
    maximum a;
    cout << "Enter Number\n";
    cin >> a.n;
    int t = a.n;
    int z = a.highest();
    cout << "Highest value digit in the number " << t << " is " << z;

    return 0;
}