#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
	int n,maxx=0,plus=1,res[101]={0};
	cin>>n;
	while(n){
		int len=n%10;
		maxx=max(maxx,len);
		for(int a=0;a<len;a++) res[a]+=plus;
		plus*=10;
		n/=10;
	}
	cout<<maxx<<endl;
	for(int a=0;a<maxx;a++){
		if(a!=maxx-1) printf("%d ",res[a]);
		else printf("%d\n",res[a]);
	}
}
