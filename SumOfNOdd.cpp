#include <iostream>
using namespace std;

int main()
{
    int i;
    int n;
    int x = - 1;
    int sum = 0;
    cout <<"\n";
    cout << "Enter Number: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
      
      sum = sum + x;
      x = x + 2;
      cout << x << endl;
    }
    cout << "Sum: " << sum << endl;
    cout <<"\n";
}