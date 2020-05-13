#include<iostream>
using namespace std;
int main(){
	int t,m,n,i;
	int sum,sisa,res;
	cin>>t;
	for(int a=1;a<=t;a++){
		cin>>m>>n>>i;
		res=m+n; sisa=sum=0;
		while(res>=i){
			sum=sum+res/i;
			sisa=res%i;
			res=res/i+sisa;
		}
		cout<<sum<<endl;
	}
}
