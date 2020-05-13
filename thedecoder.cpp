#include<iostream>
using namespace std;
int main(){
	string nama;
	while(getline(cin,nama)){
		for(int a=0;a<nama.length();a++){
			cout<<char(int(nama[a])-7);
		}
		cout<<endl;
	}
}
