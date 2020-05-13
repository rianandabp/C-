#include<iostream>
#include<string.h>
using namespace std;
long long int memo[10000][10];
int coin[]={50,25,10,5,1};
long long int dp(int a,int b){
	if(a<0) return 0;
	if(a==0) return 1;
	if(b>4) return 0;
	if(memo[a][b]!=-1) return memo[a][b];
	long long int res=dp(a-coin[b],b)+dp(a-coin[b+1],b+1)+dp(a-coin[b+2],b+2)+dp(a-coin[b+3],b+3)+dp(a-coin[b+4],b+4);
	memo[a][b]=res;
	return res;
}
int main(){
	int input;
	memset(memo,-1,sizeof(memo));
	while(cin>>input){
		cout<<dp(input,0)<<endl;
	}
}
