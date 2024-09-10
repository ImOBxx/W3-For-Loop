#include <iostream>
using namespace std;

int main()
{
    
    int i;
    int n;
    cout << "Enter Number: ";
    cin >> n;
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        cout << i << endl;
        sum = sum + i;

    }
    
    cout << "The Sum of First 10 numbers: " << sum << endl;
    
}