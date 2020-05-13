#include<iostream>
using namespace std;
int main(){
	int m,n,t;
	while(cin>>m>>n>>t){
		int number[t];
		number[0]=0;
		for(int a=1;a<=t;a++){
			number[a]=-1;
			if(a>=m&&number[a-m]>=0)
				number[a]=number[a-m]+1;
			if(a>=n&&number[a-n]>=0)
				number[a]=max(number[a-n]+1,number[a]);
		}
		if(number[t]>=0) cout<<number[t]<<endl;
		else{
			int cnt=0;
			while(number[t-cnt]<0)
				cnt++;
			cout<<number[t-cnt]<<" "<<cnt<<endl;
		}
	}
}
