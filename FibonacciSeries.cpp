#include <iostream>
using namespace std;

int main()
{
    int n;
    cout <<"\n";
    cout << "Enter The Nth Term: ";
    cin >> n;
    int x = 0;
    int y = 1;
    int c = 0;
    cout <<"\n";
    cout << "The Fibonacci Series: " << endl;
    cout <<"\n";
    cout << x << endl;
    cout <<"\n";
    cout << y << endl;
    cout <<"\n";
    for (int i = 1; i <= n - 2; i++)
    {
        c = x + y;
        cout << c << endl;
        cout <<"\n";
        x = y;
        y = c;
    }
}