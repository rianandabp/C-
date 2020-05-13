#include<iostream>
#include<string.h>
using namespace std;
long long int memo[100];
long long int fibbo(int x){
	long long int sum;
	memo[0]=0; memo[1]=1;
	if(memo[x]!=-1) return memo[x];
	return memo[x]=fibbo(x-1)+fibbo(x-2);
}
int main(){
	int t,val;
	cin>>t;
	memset(memo,-1,sizeof(memo));
	for(int a=0;a<t;a++){
		cin>>val;
		cout<<"Scenario #"<<a+1<<":\n"<<fibbo(val+2)<<endl<<endl;
	}
}
