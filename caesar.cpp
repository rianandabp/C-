#include<iostream>
using namespace std;
int main(){
	string s;
	int n;
	cin>>s>>n;
	for(int a=0;a<s.length();a++){
		if(int(s[a])+n<123) s[a]=char(int(s[a])+n);
		else s[a]=char(((int(s[a])+n)%122)+96);
	}
	cout<<s<<endl;
}
