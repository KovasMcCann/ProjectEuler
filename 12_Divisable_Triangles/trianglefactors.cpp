#include <iostream>
using namespace std;

int main(){

    int divisors = 0;
    int sum = 0;
    //for(int i = 1; i <= 7; i += 1){
    for(int i = 1; i >= 0; i += 1){
        sum += i;

        for(int j = sum; j > 0; j--){
            if(sum % j == 0){
                divisors++;
            }
        }

        if(divisors >= 500){
            cout << sum;
            break;
        }

        cout << sum << "|" << divisors << endl;
        divisors = 0;
    }
}