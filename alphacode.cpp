#include<iostream>
#include<string.h>
using namespace std;
string number;
int memo[5001];
int len;
int dp(int x){
	int sum;
	if(x>=len-1) return 1;
	if(memo[x]!=-1) return memo[x];
	if((number[x]-'0')*10+(number[x+1]-'0')<27&&number[x+2]!='0'&&number[x+1]!='0')
		sum=dp(x+1)+dp(x+2);
	else{
		if(number[x+2]=='0')sum=dp(x+3);
		else if(number[x+1]=='0') sum=dp(x+2);
		else sum=dp(x+1);	
	}
	return memo[x]=sum;
}
int main(){
	while(cin>>number&&number!="0"){
		memset(memo,-1,sizeof(memo));
		len=number.length();
		cout<<dp(0)<<endl;
	}
}
