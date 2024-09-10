#include <iostream>
using namespace std;

int main()
{
    int mark, attendance;
    cout << "Enter your mark: ";
    cin >> mark;
    cout << "Enter your atendance: ";
    cin >> attendance;
    mark >= 35 && attendance >= 75 ? cout << "You have passed" << endl : cout << "You have failed" << endl;
    }
