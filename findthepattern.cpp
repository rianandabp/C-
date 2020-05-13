#include<iostream>
using namespace std;
int cnt=0;
int cetak(char n){
	cnt++;
	if(n == 'A') {
		printf("A");	
	}
	else {
	cetak(n-1);
	cout<<n;
	cetak(n-1);	
	}
	
}
int main(){
	int t;
	cin>>t;
	char sesuatu = (t - 1) + 'A';
	cetak(sesuatu);
	cout<<endl;
	cout<<cnt<<endl;
}
