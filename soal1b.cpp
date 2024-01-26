#include<iostream>

using namespace std;

int main() {
   long long fib[100];

   for(int i = 0; i < 100; i++) {
      if(i == 0) {
         fib[0] = i;
      } else if(i == 1) {
         fib[1] = i;
      } else {
          fib[i] = fib[i-1]+fib[i-2];
      }
   }

   for(int k = 0; k < 100; k++) {
     cout << fib[k] << " ";
   }

   return 0;
}