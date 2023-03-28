#include <iostream>

// Define overloaded functions to calculate area of circle, area of rectangle and area of triangle

using namespace std;
int area(int r)
{
    return 3.14 * r * r;
}
int area(int l, int b)
{
    return l * b;
}
int area(float base, float height)
{
    return (base * height) / 2;
}
int main()
{
    float radius, base, height;
    int length, breadth;
    cout << "Enter Length and Breadth\n";
    cin >> length >> breadth;
    cout << "Enter Radius\n";
    cin >> radius;
    cout << "Enter Base and Height\n";
    cin >> base >> height;

    cout << "Area of circle with radius " << radius << " is " << area(radius) << endl;
    cout << "Area of rectangle with length " << length << " and breadth " << breadth << " is " << area(length, breadth) << endl;
    cout << "Area of Triangle with Base " << base << " and height " << height << " is " << area(base, height) << endl;

    return 0;
}