#include <iostream>
using namespace std;

int main()
{
    int x, n, k, f, i, j;
    int sum = 0;
    cout << "Enter X: ";
    cin >> x;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
        
        for (j = 1; j <= i; j++)
        {
            k = 1 / f;
        }
        sum = sum + k;
    }
    cout << sum << endl;
}