#include<iostream>
#include<stack>
using namespace std;
int main(){
	int t;
	string kata;
	stack<int> val;
	cin>>t;
	for(int a=0;a<t;a++){
		cin>>kata;
		bool p=true;
		for(int b=0;b<kata.length();b++){
			if(kata[b]=='{'||kata[b]=='('||kata[b]=='[')
				val.push(kata[b]);
			else if(!val.empty()){
				if(kata[b]=='}'&&val.top()=='{'||kata[b]==']'&&val.top()=='['||kata[b]==')'&&val.top()=='('){
					val.pop();
				}
				else{
					p=false;
					break;
				}
			}
			else{
				p=false;
				break;
			}
		}
		if(p&&val.empty())
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		while(!val.empty())
			val.pop();
	}
}

