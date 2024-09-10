#include <iostream>
using namespace std;

int main()
{
    int r, sum = 0, n, x = 0, y, temp, temp1;
    cout <<"\n";
    cout << "Enter Number: ";
    cin >> n;
    temp = n;
    temp1 = n;
    n = n / 1000;
    r = n % 10;
    sum = sum + r;
    cout << "\n";
    cout << "The First Digit Of " << temp1 << ": " << sum << endl;
    cout << "\n";
    r = temp % 10; 
    x = x + r;
    cout << "The Last Digit Of " << temp1 << ": " << x << endl;
    cout << "\n";
    y = sum + x;
    cout << "Sum Of Digits: " << y << endl;
    cout << "\n";


    
}