#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int i = 5;
    
    cout << "Number:" << i << "\n";
    
    bool Prime = true;
    
    int j = sqrt(i) + 1; 

    while(j > 2){
        cout << j << "%" << i << ":" << j % i << "\n"; 
        cout << i << "%(" << j << "+2):" << i % (j + 2) << "\n"; 

        if(i % j  == 0 || i % (j + 2) == 0){ //if 0 then not prime
            Prime = false;
            break; 
        }
        j--;
    }

    if(Prime){
        cout << "Prime";
    }
    return 0;
} 