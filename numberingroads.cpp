#include<iostream>
using namespace std;
int main(){
	int n,m,temp,cnt=0;
	while(cin>>n>>m&&n!=0&&m!=0){
		++cnt; bool p=true;
		for(int a=2;a<27;a++){
			if(m>=n){
				cout<<"Case "<<cnt<<": "<<0<<endl;
				p=false; break;
			}
			else if(m*a>=n){
				if(a==26)
					cout<<"Case "<<cnt<<": "<<a<<endl;
				else
					cout<<"Case "<<cnt<<": "<<a-1<<endl;
				p=false; break;
			}
			else continue;
		}
		if(p) cout<<"Case "<<cnt<<": impossible"<<endl;
	}
}
