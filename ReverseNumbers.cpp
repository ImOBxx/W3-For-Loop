#include <iostream>
using namespace std;

int main()
{
    int n; 
    cout <<"\n";
    cout << "Enter A Number: ";
    cin >> n;
    int r, sum = 0;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    cout <<"\n";
    cout << "Reversed Digits: " << sum << endl;
    cout <<"\n";
}
