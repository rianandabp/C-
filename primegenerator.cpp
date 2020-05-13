#include<iostream>
#include<math.h>
using namespace std;
long long int check(long long int x){
	if(x==1) return 0;
	if(x==2) return 1;
	long long int len=sqrt(x);
	for(long long int a=3;a<=len;a+=2)
		if(x%a==0) return 0;
	return 1;
}
int main(){
	long long int t,m,n;
	cin>>t;
	for(int a=0;a<t;a++){
		cin>>m>>n;
		for(long long int b=m;b<=n;b++){
			if(b%2==0&&b!=2) continue;
			else{
				if(check(b))
					cout<<b<<endl;
			}
		}
		cout<<endl;
	}
}
