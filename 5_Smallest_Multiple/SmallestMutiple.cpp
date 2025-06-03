/*
Multiple "Facts"
1. Every number is a multiple of itself.
2. The multiples of a number are infinite. (We need a limit)
3. The multiple of a number is greater than or equal to the number itself (except for 0). <~~ Start @ 20

Other:
Factorial is a multiple of all other numbers
*/

#include <iostream>
#include <cmath>
using namespace std;

int factorial(long double n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

int main() {

    int max = 20;
    int min = 1;

    //long double start = factorial(max);
    int start = 1000000000; //cheating

    //cout << start;

    while(start > max){ //rule 3
        int i;
        for(i = max; i > min; i--){
            if(start % i != 0){
                break;
            }
        }
        if(i == min){ //so elegante
            cout << start << "\n"; 
        }
        start--;
    }
}
