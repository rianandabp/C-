#include<iostream>
#include<map>
using namespace std;
int main(){
	int t,max,nomor;
	string s;
	multimap<string,string> lucky;
	cin>>t;
	for(int a=1;a<=t;a++){
		for(int b=1;b<=10;b++){
			cin>>s>>nomor;
			if(b==1) max=nomor;
			if(b>1&&nomor>max) max=nomor;
			lucky.insert(pair<string,string>(to_string(nomor),s));
		}
		std::pair <std::multimap<string,string>::iterator, std::multimap<string,string>::iterator> ret;
    	ret = lucky.equal_range(to_string(max));
    	cout<<"Case #"<<a<<":"<<endl;
		for(std::multimap<string,string>::iterator it=ret.first; it!=ret.second; ++it){
			cout<<(*it).second<<endl;
		}
		lucky.clear();
	}
}
