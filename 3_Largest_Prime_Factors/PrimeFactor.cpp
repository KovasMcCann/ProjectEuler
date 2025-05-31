#include <iostream>
#include <cmath>
using namespace std;

int main() {
 
    long long int n = 600851475143;

    for(long long i = n - 1; i > 0; i--){
        if(n % i == 0){ //check if factor
            cout << "i:" << i << "\n";

            /* Prime Check
            if number is between 2 sqrt(n) check to divide by zero
            */
            bool Prime = true;
            int j = sqrt(i) + 1;
            
            while(j > 2){
                //cout << j % i << "\n";
                if(i % j == 0){ //if 0 then not prime
                    Prime = false;
                    break; 
                }
                j--;
            }

            if(Prime){
                cout << i << " ";
            }
        }
    }
    return 0;
} 