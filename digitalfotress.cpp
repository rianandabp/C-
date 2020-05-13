#include<iostream>
using namespace std;
int main(){
	int t;
	string nama;
	cin>>t; getchar();
	for(int a=1;a<=t;a++){
		getline(cin,nama);
		if(nama.length()!=16){
			cout<<"INVALID"<<endl;
			continue;
		}
		for(int a=0;a<4;a++)
			cout<<nama[a]<<nama[a+4]<<nama[a+8]<<nama[a+12];
		cout<<endl;
	}
}
