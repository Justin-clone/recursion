#include <iostream>
using namespace std;
int getFib(int);

int main() {
   int x, i;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
   while(i < x) {
      cout << " " <<getFib(i);
      i++;
   }
   return 0;
}

int getFib(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(getFib(x-1)+getFib(x-2));
   }
}
