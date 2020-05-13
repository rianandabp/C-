#include<iostream>
using namespace std;
int main(){
	int t,temp=0,MIN=0,x;
	cin>>t;
	while(t--){
		cin>>x;
		temp+=x;
		MIN=min(MIN,temp);
	}
	cout<<abs(MIN)<<endl;
}
