#include <iostream>
#include <cmath>
using namespace std;

int main() {
 
    long long int n = 600851475143; //odd numbers have odd factors
    //long long int n = 13195;

    for(long long i = n; i > 0; i -= 2){
        //cout << i << "\n";
        if(n % i == 0){ //check if factor
            //cout << "i:" << i << "\n";

            /* Prime Check
            if number is between 2 sqrt(n) check to divide by zero
            */
            bool Prime = true;
            int j = sqrt(i) + 1;
            
            while(j > 2){
                if(i % j == 0){ //if 0 then not prime
                    Prime = false;
                    break; 
                }
                j--;
            }

            if(Prime){
                cout << i << "<~~~ \n";
                cin.get();
            }
        }
    }
    return 0;
} 