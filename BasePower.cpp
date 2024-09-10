#include <iostream>
using namespace std;

int main()
{
    int x, y, num = 1;
    cout << "Enter Base: ";
    cin >> x;
    cout << "Enter Exponent: ";
    cin >> y;
    for (int i = 1; i <= y; i++)
    {
        num = num * x;
    }
    cout << x << " ^ " << y << " = " << num << endl;
}