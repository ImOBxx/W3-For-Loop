#include <iostream>
using namespace std;

int main()
{
    int num1, num2, gcd;
    cout << "Input the First Number: ";
    cin >> num1;
    cout << "Input The Second Number: ";
    cin >> num2;
    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    cout << "The GCD is: " << gcd << endl;

    return 0;
}