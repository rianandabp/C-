#include<iostream>
#include<cmath>
using namespace std;
double log10(double n){
	return log(n)/log(10);
}
int main(){
	long long m,n,cnt;
	double c;
	while(cin>>n>>m){
		c=0;
		for(int a=0;a<m;a++)
			c+=log10(n-a)-log10(1+a);
		c=floor(c)+1;
		cout<<c<<endl;
	}
}
