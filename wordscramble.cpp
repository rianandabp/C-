#include<iostream>
using namespace std;
int main(){
	string nama;
	int p;
	while(getline(cin,nama)){
			p=0;
			while(nama.find(' ')!=nama.npos){
			int search=nama.find(' ')-1;
			for(int a=search;a>=p;a--) cout<<nama[a];
			cout<<' ';
			p=nama.find(' ');
			nama.erase(nama.find(' '),1);	
			}
			int len=nama.length();
			for(int a=len-1;a>=p;a--) cout<<nama[a];
			cout<<endl;
	}
}
