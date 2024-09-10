#include <iostream>
using namespace std;

int main()
{
  int n, sum = 0, r, x = 0, b;
  cout << "Enter Number: ";
  cin >> n;
  while (n > 0)
  {
    r = n % 10;
    sum = (sum * 10) + r;
    n = n / 10;
  }
  while (sum > 0)
  {
    r = sum % 10;
    sum = sum / 10;
    cout << "\t";
    if (r == 1)
    {
        cout << "One" << "\t";;
    }
    else if (r == 2)
    {
        cout << "Two" << "\t";
    }
    else if (r == 3)
    {
        cout << "Three" << "\t";;
    }
    else if (r == 4)
    {
        cout << "Four" << "\t";;
    }
    else if (r == 5)
    {
        cout << "Five" << "\t";;
    }
    else if (r == 6)
    {
        cout << "Six" << "\t";;
    }
    else if (r == 7)
    {
        cout << "Seven" << "\t";
    }
    else if (r == 8)
    {
        cout << "Eight" << "\t";
    }
    else if (r == 9)
    {
        cout << "Nine" << "\t";
    }
    else if (r == 0)
    {
        cout << "Zero" << "\t";
    }
  }
}