#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    //Sieve of Eratosthenes
    //int max = 200;
    int max = 2000000;
    int p = 2;

    vector<bool> nums(max + 1, true);
    nums[0] = nums[1] = false; //0 and 1 are not primes

    for(int i = 2; i <= sqrt(max); i++){
        if(nums[i]){
            for(int j = i * i; j <= max; j += i){
                nums[j] = false;
            }
        }
    }

    long long sum = 0;

    for (int i = 2; i < max; i++) {
        if (nums[i]){
            cout << i << "\n";
            sum += i;
        }
    }

    cout << sum;
}