#include <iostream>
using namespace std;

int main()
{
    int r, sum = 1, n;
    cout << "Enter Number: ";
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum * r;
        n = n / 10;
    }
    cout << "Product Of Digits: " << sum << endl;
}