#include <iostream>
using namespace std;

int main()
{
    double sum = 0, a;
    int n, i;
    cout << "Input the value for the nth term: ";
    cin >> n;
    for (i = 1; i <= n; ++i)
    {
        a = 1 / pow(i, i);
        cout << "1/" << i << "^" << i << " = " << a << endl;
        sum = sum + a;

    }
cout << " The sum of above series is: " << sum << endl;
return 0;
    }
