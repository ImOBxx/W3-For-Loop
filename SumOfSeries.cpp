#include <iostream>
using namespace std;

int main()
{
    int n;
    cout <<"\n";
    cout << "Enter Number: ";
    cin >> n;
    cout <<"\n";
    int i, j, sum = 0;
    int t = 9;
    for (int i = 1; i <= n; i++)
    {
        sum += t;
        if (i != n)
        cout << t << " " << " + " << " ";
        else 
        cout << t << " " << " = " << sum;
        t = t * 10 + 9;
    }
    cout <<"\n";
    cout <<"The Sum Of Series: " << sum << endl;
    cout <<"\n";
}