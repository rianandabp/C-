#include<iostream>
#include<map>
using namespace std;
int main(){
	int n,i;
	map<string,string> phonebook;
	string nama,nomor;
	cin>>n>>i;
	for(int a=1;a<=n;a++){
		cin>>nama>>nomor;
		phonebook.insert(make_pair(nama,nomor));
	}
	for(int a=1;a<=i;a++){
		cin>>nama;
		if(phonebook.count(nama)!=0){
			cout<<phonebook.find(nama)->second<<endl;
		}
		else{
			cout<<"NIHIL"<<endl;
		}
	}
}
