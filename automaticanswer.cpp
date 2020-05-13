#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int t,temp;
	cin>>t;
	for(int a=1;a<=t;a++){
		cin>>temp;
		temp*=567; temp/=9; temp+=7492; temp*=235; temp/=47; temp-=498;
		temp%=100;
		temp/=10;
		cout<<abs(temp)<<endl;
	}
}
