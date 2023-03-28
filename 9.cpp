#include <iostream>

/*Write functions using function overloading to find a maximum of two numbers and both
the numbers can be integer or real.*/

using namespace std;

int max(int p, int q)
{
    if (p > q)
    {
        return p;
    }
    else
        return q;
}
float max(float p, float q)
{
    if (p > q)
    {
        return p;
    }
    else
        return q;
}
int main()
{
    int x, y;
    float a, b;
    cout << "Enter Two integers\n";
    cin >> x >> y;
    cout << "Enter Two real numbers\n";
    cin >> a >> b;
    int m = max(x, y);
    float ma = max(a, b);
    cout << "Maximum of integers is " << m << endl;
    cout << "Maximum of real is " << ma << endl;

    return 0;
}