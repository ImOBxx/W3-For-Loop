#include <iostream>
using namespace std;

int main()
{
    int num, num1, sum = 0, i;
    cout << "Enter Statring Number: ";
    cin >> num;
    cout << "Enter Last Number ";
    cin >> num1;
    while (num <= num1)
    {
        sum = 0;
        for (int i = 1; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                sum = sum + i;
            }
        }
        if (sum == num)
        cout << num << " is a Perfect Number. " << endl;
        num++;
    }

}