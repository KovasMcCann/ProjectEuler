#include <iostream>
#include <vector>

using namespace std;

//int n = 220; //lowest amicable number
int n = 1; //lowest amicable number

int amicable(int n){
   int sum = 0;

   for(int d = n; d > 0; d--){
   	if ( n % d == 0 && d != n){
		sum += d;
	}
   }

   int csum = 0;

   for(int d = sum; d > 0; d--){
   	if (sum % d == 0 && d != sum){
		csum += d;
	}
   }

   if (n == csum && sum != csum) {
	cout << "Hit:" << n << "\n";
	return n;
   }
   else{
	return 0;
   }
}

int main(){
   int total = 0;

   while (n < 10000){
       //cout << "\n" << n << "\n";
       total += amicable(n);
       n++;
   } 

   cout << "------\n"<< total << "\n";
}
