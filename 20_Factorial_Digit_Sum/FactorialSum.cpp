#include <iostream>
#include <vector>
using namespace std;

int n = 10;

int main() {
    vector<int> digits(1, 1);
    int sum = 0;

    for (int i = 2; i <= n; i++) {
        int carry = 0;
        for (int &d : digits) {
            int prod = d * i + carry;
            d = prod % 10;
            carry = prod / 10;
        }
        while (carry) {
            digits.push_back(carry % 10);
            carry /= 10;
        }
    }

    for (int d : digits)
        sum += d;

    cout << "Sum: " << sum;
}
