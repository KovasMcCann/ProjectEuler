#include <iostream>
#include <cmath>
using namespace std;

/*
The sum of the first n natural numbers is \frac{n(n + 1)}{2}
This squared is "the magic number" or x.

x + sqrt(x) = answer
*/

int sum(int n){
    if (n <= 0) return 0;  // safe base case
    return sum(n - 1) + (n * n);
}

int main(){
    int max = 100;

    //square of the sum of the first ten natural numbers
    int magic = (max * ( max + 1))/2;
    magic = magic * magic;

    cout << magic << "\n";

    cout << sum(max) << "\n";

    cout << "-------\n";

    cout << magic - sum(max);
}