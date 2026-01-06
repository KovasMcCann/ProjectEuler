#include <iostream>
#include <vector>

using namespace std;

int n = 10;

int main(){
    /* Need to learn how to use vectors to store data
    this was used for the last two problems but i was unable to implement myself
    */
   
   vector<int> numbers(11,1); //defines a vector of one element of value 1 

   for(int x : numbers){
       cout << x << "\n";
   } 
}
