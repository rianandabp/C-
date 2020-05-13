#include<iostream>
using namespace std;
int main(){
	string angka;
	unsigned long long int t,sum=0,res;
	cin>>angka>>t;
	int len=angka.length();	
	for(int a=0;a<t;a++){
		for(int b=0;b<len;b++) sum=sum+(angka[a]-'0');
	}
	res=sum%9;
	cout<<res<<endl;
}
