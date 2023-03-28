#include <iostream>
using namespace std;

class prime_number
{
public:
    int n;
    void prime()
    {
        int flag = 0;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            cout << n << " is prime";
        }
        else
        {
            cout << n << " is not prime";
        }
    }
};

int main()
{

    prime_number a;
    cout << "Enter Number\n";
    cin >> a.n;
    a.prime();

    return 0;
}