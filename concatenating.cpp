#include <iostream>
#include <string>
using namespace std;
int fib(int n){
	if(n == 0) return 0;
	else if (n == 1) return 1;
	else return fib(n-1) + fib(n-2);
}
int main() {
   int number,fb;
   cout<<"enter a number: ";
   cin>>number;
   fb = fib(number);
   cout<<"Fibonacci series of "<<number<<" = "<<fb;

    return 0;
}

