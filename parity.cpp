#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n,angka[35],cnt,check;
	while(cin>>n&&n!=0){
		memset(angka,0,sizeof(angka)); cnt=0; check=0;
		while(n>0){
			angka[cnt]=n%2;
			n/=2;
			cnt++;
		}
		for(int a=0;a<cnt;a++){
			if(angka[a]==1) check++;
		}
		printf("The parity of ");
		for(int a=cnt-1;a>=0;a--)
			cout<<angka[a];	
		printf(" is %d (mod 2).\n",check);
	}
}
