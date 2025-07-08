#include <iostream>

using namespace std;

int main() {
    long maxCount = 0;

    for(long long n = 1; n <= 1000000; n++) {
        long count = 0;
        long long x = n;

        while(x != 1){
            if(x % 2 == 0){
                x /= 2;
            }
            else{
                x = 3 * x + 1;
            }
            count++;
        }

        //cout << n << " | Steps: " << count << endl;
        if(count > maxCount){
            maxCount = count;
            cout << n << endl;
        }
    }

    return 0;
}