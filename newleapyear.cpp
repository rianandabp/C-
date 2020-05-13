#include<iostream>
#include<string.h>
using namespace std;
int tahun(char temp[],int leng, int year){
	long long int n=0;
	for(int a=0;a<leng;a++){
		n=(n*10+(temp[a]-'0'))%year;	
	}
	if(n==0) return 0;
	else return 1;
}
int main(){
	char temp[1000001]={0}; bool p=false;
	int len;
	while(cin>>temp){
		if(p)cout<<endl;
		p=true;
		len=strlen(temp);
		if((tahun(temp,len,4)==0&&tahun(temp,len,100)!=0)||tahun(temp,len,400)==0){
			cout<<"This is leap year."<<endl;
			if(tahun(temp,len,15)==0) cout<<"This is huluculu festival year."<<endl;
			if(tahun(temp,len,55)==0) cout<<"This is bulukulu festival year."<<endl;
		}
		else if(tahun(temp,len,15)==0) cout<<"This is huluculu festival year."<<endl;
		else cout<<"This is an ordinary year."<<endl;
	}
}
