#include <iostream>
using namespace std;

int main()
{
    int sum = 0, i, j, n, tsum;
    cout << "Enter Number: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        tsum = 0;

        for (j = 1; j <= i; j++)
        {
            sum = sum + j;
            tsum = tsum + j;
            cout << j;
            if (j < i)
            {
                cout << " + ";

            }
        }
        cout << " = " << tsum << endl;
    }
    cout << "The sum of the above series is: " << sum << endl;
    return 0;
        

    }
