#include<iostream>
using namespace std;
int cnt;
bool p=true;
int check(double val){
	int angka=3;
	while(angka<val)
		angka=angka*3;
	if(val==angka) return 1;
	else return 0;	
}
int bagi(int val){
	//cout<<"val "<<val<<endl;
	if(val==1) return cnt;
	if(val>9&&check(double(val-1))&&p){
		val--; p=false;	cnt++;
		//cout<<"yes "<<val<<endl;
	}
	if(val%3==0){
		cnt++;
		bagi(val/3);
	}
	else if(val%2==0){
		cnt++;
		bagi(val/2);
	}
	else {
		val--; cnt++;
		bagi(val);	
	}
}
int main(){
	int t,val;
	cin>>t;
	for(int a=1;a<=t;a++){
		cin>>val; p=true;
		cnt=0;
		if(val==1){
			cout<<0<<endl;
			continue;
		}
		cout<<bagi(val)<<endl;
	}
}
