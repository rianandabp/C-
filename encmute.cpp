#include<iostream>
using namespace std;
int main(){
	string name,temp;
	int t,key[21];
	cin>>t;
	for(int a=0;a<t;a++)
		cin>>key[a];
	cin>>name;
	int cnt=0;
	for(int a=0;a<name.length();a=a%t){
		temp[cnt]=name[key[a]];
		cnt++;
	}
	cout<<"\'";
	for(int a=0;a<name.length();a++)
		cout<<temp[a];
	cout<<"\'";
}
