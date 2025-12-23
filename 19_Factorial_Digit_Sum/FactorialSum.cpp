#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
    int num = 5;
    int factorial = 1;
    int sum = 0; 

    while(num > 1){
        factorial = factorial * num;
        num--;
    }

    cout << factorial << "\n"; 

    int len = to_string(num).length();
    cout << len;

    while(len > 0){
        int cache = factorial % (len * 10);
        cout << "cache:" << cache;
        sum = sum + cache;
        len--;
    }
    cout << sum;
}
