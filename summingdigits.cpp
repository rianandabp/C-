#include<iostream>
using namespace std;
int main(){
	int temp;
	string s;
	while(cin>>temp&&temp!=0){
		while(temp>9){
			s=to_string(temp);
			temp=0;
			for(int a=0;a<s.length();a++) 
			temp=temp+int(s[a]-'0');
		}
		cout<<temp<<endl;
	}
}
