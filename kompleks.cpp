#include<iostream>
using namespace std;
long long res=0;
long long multiplier(int x, int y){
	if (y==1){
		if(x%2==1) res=res+x/2+1;
		else res=res+x/2;
		return 0;
	}
	res=res+(((x/y)-(x/(y+1)))*y);
	multiplier(x,y-1);
}
long long first(int n){
   for( int i = 1; i <= n; i++ ){
   		if(n/i==n/(i+1)){
   			multiplier(n,n/i);
   			return 0;
		}
		res = res + n/i;
	}
}
int main(){
	int t,x;
	cin>>t;
	for(int a=1;a<=t;a++){
		res=0;
		cin>>x;
		first(x);
		cout<<res<<endl;
	}
}
