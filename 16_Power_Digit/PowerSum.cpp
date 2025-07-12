#include <iostream>
using namespace std;

/*
Can I use recursion to quickly calculate to the nth power?

If the exponent is a positive integer, multiply the base by itself the number of times indicated by the exponent. 
    Example: 5^4 = 5 * 5 * 5 * 5 = 625. 
*/

long long power(int base, int exponent){
    if (exponent == 0){
        return 1;
    }

    long long half = power(base, exponent / 2);

    if (exponent % 2 == 0){
        cout << half << endl;
        return half * half;
    }
    else{
        cout << half << endl;
        return half * half * base;
    }
}

int main(){

    int base = 2;

    int exponent = 1000;

    long long digits = power(base, exponent);

    int sum;

    do { 
        sum += digits % 10;
        cout << digits % 10 << endl;
        digits /= 10;
    }
    while (digits != 0);

    cout << sum;
}
