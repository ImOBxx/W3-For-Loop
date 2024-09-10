#include <iostream>
using namespace std;

int main()
{
    int r, p = 0, count = 0, i, j, num1, num2;
    cout << "Enter Starting Point: ";
    cin >> num1;
    cout << "Enter Ending Point: ";
    cin >> num2;
    for (i = num1; i <= num2; i++)
    {
    count = 0;
    
        for (j = 1; j <= i; j++)
        {
            r = i % j;
            if (r == 0)
            {
                count++;
            }
        }
            if (count == 2)
            {
                cout << i << " Prime Number " << endl;
                p++;
            }
                else
                {
                 cout << i << " Composite Number " << endl;
                }
            }
            cout << "Total number of primes are " << p << endl;

        }
    
