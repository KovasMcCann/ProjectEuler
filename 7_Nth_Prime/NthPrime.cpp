#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int nth = 10001;

    // Calculate upper bound for nth prime
    double up_double = nth * (log(nth) + log(log(nth)));
    int up = static_cast<int>(ceil(up_double));

    // Sieve of Eratosthenes
    vector<bool> A(up + 1, true);
    A[0] = A[1] = false;

    int limit = static_cast<int>(sqrt(up));
    for (int i = 2; i <= limit; ++i) {
        if (A[i]) {
            for (int j = i * i; j <= up; j += i) {
                A[j] = false;
            }
        }
    }

    // Collect primes and find nth prime
    int count = 0;
    int nth_prime = -1;
    for (int i = 2; i <= up; ++i) {
        if (A[i]) {
            count++;
            if (count == nth) {
                nth_prime = i;
                break;
            }
        }
    }

    if (nth_prime != -1) {
        cout << nth_prime;
    }

    return 0;
}