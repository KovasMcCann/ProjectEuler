#include <iostream>
#include <cmath>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<int, int> dict =
    {
        {-1, 3},  // "and"
        {1, 3},   // one
        {2, 3},   // two
        {3, 5},   // three
        {4, 4},   // four
        {5, 4},   // five
        {6, 3},   // six
        {7, 5},   // seven
        {8, 5},   // eight
        {9, 4},   // nine
        {10, 3},  // ten
        {11, 6},  // eleven
        {12, 6},  // twelve
        {13, 8},  // thirteen
        {14, 8},  // fourteen
        {15, 7},  // fifteen
        {16, 7},  // sixteen
        {17, 9},  // seventeen
        {18, 8},  // eighteen
        {19, 8},  // nineteen
        {20, 6},  // twenty
        {30, 6},  // thirty
        {40, 5},  // forty
        {50, 5},  // fifty
        {60, 5},  // sixty
        {70, 7},  // seventy
        {80, 6},  // eighty
        {90, 6},  // ninety
        {100, 7}, // hundred
        {1000,11} // one thousand
    };

    int max = 1000;
    int min = 1;
    int cur = min;
    long sum = 0;

    while(cur >= min && cur <= max){

        int length = (cur == 1000) ? 4 : (int)log10(cur) + 1;

        if(length == 1){
            // 1 to 9
            sum += dict[cur];
        }
        else if(length == 2){
            if(cur <= 20){ // 10 to 20
                sum += dict[cur];
            }
            else {
                int tens = (cur / 10) * 10;
                int ones = cur % 10;

                sum += dict[tens];
                if (ones != 0) {
                    sum += dict[ones];
                }
            }
        }
        else if (length == 3) {
            int hundreds = cur / 100;
            int remainder = cur % 100;

            sum += dict[hundreds];
            sum += dict[100];

            if (remainder != 0) {
                sum += dict[-1]; //and

                if (remainder <= 20) {
                    sum += dict[remainder];
                } else {
                    sum += dict[(remainder / 10) * 10];
                    if (remainder % 10 != 0)
                        sum += dict[remainder % 10];
                }
            }
        }
        else if(length == 4){ //thousand
            sum += dict[cur];
        }
        cout << cur << ": " << sum << endl;
        cur++;
    }

    cout << "===========" << "\n" << sum << endl;
}