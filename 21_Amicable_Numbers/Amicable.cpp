#include <iostream>
#include <vector>

using namespace std;

int n = 220; //lowest amicable number

void amicable(int n){
   int sum = 0;

   for(int d = n; d > 0; d--){
   	if ( n % d == 0 && d != n){
		cout << ": " << d << "\n";
		sum += d;
	}
   } //284

   for(int d = sum; d > 0; d--){
   	if (n % d == 0 && d != n){
		cout << ": " << d << "\n";
		sum -= d;
	}
   }

   if (sum == n) {
	cout << "Pair:" << sum << ":" << n << "<~~~~\n";
   }
   
   cout << "-----\n" << sum << "\n";
}

int main(){
    /* Need to learn how to use vectors to store data
    this was used for the last two problems but i was unable to implement myself
    */
   
   vector<int> numbers(11,1); //defines a vector of one element of value 1 

   //while (n < 10000){
   while (n < 223){
       cout << "\n" << n << "\n";
       amicable(n);
       n++;
   } 
}
