#include<iostream>
#include<math.h>
using namespace std;
int isprime(int n){
	bool p=false;
	for (int a=2;a<=sqrt(n);a++){
		if(n%a==0) p=true;
	}
	if(p) return true;
	else return false;
}
int main(){
	int n,a=2,cnt=0;
	cin>>n;
	do{
		if(not isprime(a)){
			cout<<a<<" ";
			cnt++;
			a++;
		}
		else a++;
	}while(cnt!=n);
}
