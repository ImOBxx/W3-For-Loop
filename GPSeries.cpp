#include <iostream>
using namespace std;

int main()
{

    int s, x, d, a, b, sum = 0;
    cout << "Enter Starting Point Of AP Series: ";
    cin >> s;
    cout << "Enter Number Of Items Of AP Series: ";
    cin >> x;
    cout << "Enter Difference Of AP Series: ";
    cin >> d;
    for (int i = 1; i <= x; i++)
    {
        cout << s << endl;
        sum = sum + s;
        s = s * d;
        
    }
    cout << "Sum Of A.P : " << sum << endl;
}
