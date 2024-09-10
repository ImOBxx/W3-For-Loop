#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;

    if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

void printNonPrimes(int upperBound) {
     cout << "Non-prime numbers up to " << upperBound << " are:" << endl;
    for (int i = 2; i <= upperBound; ++i) {
        if (!isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int upperBound;
    cout << "Enter upper bound: ";
    cin >> upperBound;
    printNonPrimes(upperBound);
    return 0;
}

