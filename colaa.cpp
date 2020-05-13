#include<iostream>
#include<string.h>
using namespace std;
int main(){
	long long int t,n,m,x,y;
	long long int bottle[100001];
	long long int after[100001];
	cin>>t;
	for(int a=0;a<t;a++){
		scanf("%ld %ld",&n,&m);
		int wasted=0;
		memset(bottle,0,sizeof(bottle));
		memset(after,0,sizeof(after));
		for(int b=0;b<n;b++)
			scanf("%ld",&bottle[b]);
		for(int b=0;b<m;b++){
			scanf("%ld %ld",&x,&y);
			after[x-1]=y;
		}
		for(int b=0;b<n;b++){
			if(after[b]>bottle[b]&&b!=n-1){
				after[b+1]+=after[b]-bottle[b];
				after[b]=bottle[b];
			}
			else if(after[b]>bottle[b]&&b==n-1){
				wasted+=after[b]-bottle[b];
				after[b]=bottle[b];
			}
		}
		cout<<wasted<<endl;
		for(int b=0;b<n;b++){
			if(b!=n-1) printf("%ld ",after[b]);
			else printf("%ld\n",after[b]);
		}
	}
}
