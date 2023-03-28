#include <iostream>

/*Write functions using function overloading to find a maximum of two numbers and both
the numbers can be integer or real.*/

using namespace std;

int sum(int p, int q)
{
    return p + q;
}
float sum(float p, float q)
{
    return p + q;
}
int main()
{
    int x, y;
    float a, b;
    cout << "Enter Two integers\n";
    cin >> x >> y;
    cout << "Enter Two real numbers\n";
    cin >> a >> b;
    int m = sum(x, y);
    float ma = sum(a, b);
    cout << "Sum of integers " << x << " and " << y << " is " << m << endl;
    cout << "Sum of real numbers " << a << " and " << b << " is " << ma << endl;

    return 0;
}