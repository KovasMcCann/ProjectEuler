#include <iostream>
using namespace std;

int main(){
    //a < b < c
    int a, b, c;

    for(int c = 1; c < 998; c++){
        for(int b = 1; b < c; b++){
            for(int a = 1; a < b; a++){
                if(a + b + c == 1000){
                    if(a*a + b*b == c*c){
                        cout << a*b*c << "\n"; 
                    }
                }
            }
        }
    }
}