#include <iostream>
using namespace std;


int main() {
    int n1 = 1; // Number one
    int n2 = 2; // Number two
    int n3 = 3;

    int max = 4000000;
    //int max = 100; // Limit for Fibonacci numbers

    int sum = 2; //one is not even

    do{
        if(n3 % 2 == 0 && n3 < max) {
            cout << n3 << " ";
            sum += n3;
        }
        n3 = n1 + n2; // Calculate next Fibonacci number
        n1 = n2; // Update n1 to the previous n2
        n2 = n3; // Update n2 to the new Fibonacci number
        cout << n3 << " ";
    }
    while(n3 < max);

    cout << "\nSum:" << sum << endl;
    
    return 0;
} 