#include<iostream>
#include<algorithm>
using namespace std;
int val[2005];
int C[2005];

int dp(int W,int n){
	int K[n+1][W+1];
	for(int a=0;a<=n;a++){
		for(int b=0;b<=W;b++){
			if(a==0||b==0)
				K[a][b]==0;
			else if(C[a-1]>b)
				K[a][b]=K[a-1][b];
			else
				K[a][b]=max(val[a-1]+K[a-1][b-C[a-1]],K[a-1][b]);
		}
	}
	return K[n][W];
}
int main(){
	int x,y,s,n;
	cin>>s>>n;
	for(int a=0;a<n;a++){
		scanf("%d %d",&x,&y);
		C[a]=x;
		val[a]=y;
	}
	cout<<dp(s,n);
}
