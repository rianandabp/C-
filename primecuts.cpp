#include<iostream>
#include<math.h>
#include<string.h>
#define N 1000
using namespace std;
int primetable[N];
int sieve(){
	for(int a=0;a<=N;a++)
		primetable[a]=a;
	primetable[0]=0;
	int n=sqrt(N);
	for(int a=2;a<=n;a++){
		for(int b=a*a;b<=N;b+=a)
			primetable[b]=0;
	}
}

int main(){
	int t,m,temp;
	int move[1000];
	sieve();
	int cnt=0;
	for(int a=1;a<=N;a++){
		if(primetable[a]!=0)
			move[cnt++]=primetable[a];
	}
	while(cin>>t>>m){
		temp=0;
		if(t%2==1){
			for(int a=t;a>0;a--){
				if(move[a]<=t){
					temp=a-1; break;
				}
			}
			int point=(temp-(2*m-1))/2;
			int start=temp-point-(2*m-1);
			for(int a=start+1;a<=temp-point;a++){
				cout<<move[a]<<" ";
			}
		}
		else{
			
		}
	}
}
