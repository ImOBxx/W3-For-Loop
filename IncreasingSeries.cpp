#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0, i, j;
    cout << "Input Value: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
     
     sum += i;
    
    cout << i << " * " << i  << " = " << sum << endl;
    }
    cout << " The sum of the above series is: " << sum << endl;
} 