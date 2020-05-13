#include<iostream>
using namespace std;
int main(){
	int t,q,temp,speed;
	cin>>t;
	for(int a=1;a<=t;a++){
		cin>>q;
		for(int b=1;b<=q;b++){
			cin>>temp;
			if(b==1) speed=temp;
			if (temp>speed) speed=temp;
		}
		cout<<"Case "<<a<<": "<<speed<<endl;
	}
}
