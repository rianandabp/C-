#include<stdio.h>
using namespace std;
unsigned long long int a[99999999]={0};
unsigned long long int fib(int n){
	if(n<=1) return n;
	if(a[n]!=0) return a[n];
	a[n]=fib(n-1)+fib(n-2);
	return a[n];
}
int main(){
	int input;
	scanf("%d",&input);
	printf("%lld\n",fib(input));
}
