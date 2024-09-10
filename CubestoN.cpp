#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    int i;
    int c;
    int n;
    cout <<"\n";
    cout << "Enter The Nth Term: ";
    cin >> n;
    cout << "\n";
    for (int i = 1; i <= n; i++)
    {
        c = x * x * x;
        x = x + 1;
        cout << " Number is :" << i << " and the cube of " << i << " is: " << c << endl;
        
    }
    cout <<"\n";

}