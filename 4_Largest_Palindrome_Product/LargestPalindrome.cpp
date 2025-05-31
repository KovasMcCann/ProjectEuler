#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int max = sqrt(1000000) - 1;
    int min = sqrt(100000) + 1;

    /*
    while(min >= max){
        int value = min * max;
        if(value % 11 == 0){
            int first = value / 1000;
            int l1 = value % 10;
            int l2 = (value % 100) / 10;
            int l3 = (value % 1000) / 100;
            int last = l1 + (10 * l2) + (100 *l3);

            if(first == last){
                cout << "~~~>";
            }
            cout << "\n" << first << ":" << last << "\n";
            cout << value << "\n"; 
        }
        min++;
    }
    */

    int largest = 0;

    for(int i = max; i >= min; i--){
        for(int j = min; j <= max; j++){
            int value = j * i;

            int first = value / 1000;
                
            int l1 = value % 10;
            int l2 = (value % 100) / 10;
            int l3 = (value % 1000) / 100;
            int last = (100 * l1) + (10 * l2) + (1 * l3);

            if(first == last){
                if(value > largest)
                    largest = value;
                cout << value << "\n";
                //cout << "~~~>";
            }
            //cout << "\n" << first << ":" << last << "\n";
            ///cout << value << "\n"; 
            
        }
    }

    cout << "------\n";
    cout << largest;
    
    return 0;
} 