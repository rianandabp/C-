#include<iostream>
using namespace std;
int main(){
	string input,temp,input2;
	int t; bool p;
	getline(cin,input,'*');
	getline(cin,input2);
	cin>>t;
	int len=input.length();
	int len2=input2.length();
	for(int a=1;a<=t;a++){
		cin>>temp;
		int lentemp=temp.length();
		p=true;
		for(int b=0;b<len;b++){
			if(input[b]!=temp[b]) {
				p=false; break;	
			}
		}
		for(int b=lentemp-1;b>=lentemp-len2;b--){
			if(lentemp<2){
				p=false; break;
			}
			if(input2[b-(lentemp-len2)]!=temp[b]) {
				p=false; break;	
			}
		}
		
		if(p && temp.length()>=(input.length())+input2.length()) cout<<temp<<endl;
	}
}
