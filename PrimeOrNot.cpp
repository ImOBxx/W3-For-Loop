#include <iostream>
using namespace std;

int main()
{
    int n, ctr = 0;
    cout << "Enter Number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i ==0)
        {
            ctr++;

        }
    }
        if (ctr == 2)
        {
            cout << "The Number Is A Prime Number. " << endl; 
        }
        else 
        {
            cout << "The Number Is Not Prime Number. " << endl;
        }
    
}