#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Pyramid Rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
          cout << "a";
    }
    cout << endl;
}

}