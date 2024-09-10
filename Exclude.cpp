#include <iostream>
using namespace std;


int main() {
    int start = 1;
    int end = 10;

    // Print numbers excluding 3 and 7
    for (int i = start; i <= end; ++i) {
        if (i != 3 && i != 7) {
          cout << i << " ";
        }
    }

    
    return 0;
}
