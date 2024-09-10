#include <iostream>
using namespace std;

int main()
{

int n, sum = 0, i, j, tsum;
cout << "Enter Number: ";
cin >> n;





for (i = 1; i <= n; i++)
// Outer loop to iterate from 1 to 'n'
	{
        tsum = 0; // Initializing 'tsum' to 0 for each iteration of the outer loop

        for (j = 1; j <= i; j++) // Inner loop to calculate the partial sums for each term of the series
		{
            sum += j; // Add 'j' to 'sum'
            tsum += j; // Add 'j' to 'tsum' for the current term

            cout << j; // Display the current value of 'j'

            if (j < i) // Condition to print '+' for all values of 'j' except the last one in each term
			{
                cout << "+"; // Display '+'
            }
        }

        cout << " = " << tsum << endl; // Display the calculated partial sum for the current term
    }
}
