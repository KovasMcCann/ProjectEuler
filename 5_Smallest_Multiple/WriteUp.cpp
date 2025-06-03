/*
Because I "cheated" in my implementation by guessing the start value I am
going to try and implement the project euler write up
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

//Sieve of Eratosthenes
vector<int> generatePrimes(int k) {
    vector<bool> isPrime(k + 1, true);
    vector<int> primes;

    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= k; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j <= k; j += i) {
                isPrime[j] = false;
            }
        }
    }

    return primes;
}

int main() {
    int k = 40;
    long long N = 1;
    bool check = true;
    double limit = sqrt(k);

    vector<int> primes = generatePrimes(k);

    for (int i = 0; i < primes.size(); ++i) {
        int p = primes[i];
        int a = 1;

        if (check) {
            if (p <= limit) {
                a = (int)(log(k) / log(p));
            } else {
                check = false;
            }
        }

        N *= pow(p, a);
    }

    cout << "LCM of numbers from 1 to " << k << " is: " << N << endl;
    return 0;
}
