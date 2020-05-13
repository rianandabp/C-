#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int check(int n){
	for(int a=2;a<=sqrt(n);a++){
		if(n%a==0) return 0;
	}
	return 1;
}
int main(){
	char nama[100];
	int sum,len;
	while(cin>>nama){
		sum=0;
		len=strlen(nama);
		for(int a=0;a<len;a++){
			if(nama[a]<'a') sum=sum+(nama[a]-'A')+27;
			else sum=sum+(nama[a]-'a')+1;
		}
		if(check(sum)) cout<<"It is a prime word."<<endl;
		else cout<<"It is not a prime word."<<endl;
	}	
}
