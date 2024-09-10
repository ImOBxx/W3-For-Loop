#include <iostream>
using namespace std;

int main()
{
    float x, sum, term, fct, y, j, m;
    int i, n;
    y = 2;
    cout << "Enter X: ";
    cin >> x;
    cout << "Enter n: ";
    cin >> n;
    sum = 1;
    term = 1;
    cout << " Term 1 value is: " << term << endl;
    
    for (i = 1; i < n; i++)
    {
        fct = 1;
        for (j = 1; j <= y; j++)
        {
            fct = fct * j; 
        }
        term = term * (-1);
        m = pow(x, y) / fct;
        m = m * term;
        cout << " Term " << i + 1 << " value is: " << m << endl;
        sum = sum + m;
        y += 2;
    }
    cout << "The sum of the above series is: " << sum << endl;
    return 0;
}
