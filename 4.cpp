#include <iostream>
#include <cstdio>
using namespace std;

int factorial(int n)
{
    int fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
    return fac;
}
int combination(int n, int r)
{
    if (n == 0)
    {
        return 1;
    }
    return factorial(n) / (factorial(n - r) * factorial(r));
}

int main()
{
    int n, r;
    cout << "Enter Number\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", combination(i, j));
        }
        printf("\n");
    }
    return 0;
}