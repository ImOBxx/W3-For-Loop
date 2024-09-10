#include <iostream>
using namespace std;

int main()
{
    int num1, ctr = 0;
    cout << "Input Number: ";
    cin >> num1;
    for (int a = 1; a <= num1; a++)
    {
        if (num1 % a == 0)
        {
            ctr++;
        }
    }
    if (ctr == 2)
    {
        cout << "The entered number is a Prime Number. \n";
    }
    else {
        cout << "The entered number is Not A Prime Number. \n";
    }
}