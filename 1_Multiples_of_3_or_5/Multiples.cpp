#include <iostream>
using namespace std;


int main() {
    int m1 = 3; // Multiple one
    int m2 = 5; // Multiple two

    int max = 1000;

    int sum = 0;
    
    for (int i = 1; i < max; i++) {
        if (i % m1 == 0 || i % m2 == 0) {
            cout << i << " ";
            sum += i;
        }
    }
    cout << "\nSum of multiples of " << m1 << " and " << m2 << " below " << max << " is: " << sum << endl;
    return 0;
} 