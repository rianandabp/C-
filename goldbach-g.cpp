#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int primetable[32768];
void sieve(){
	int n=sqrt(32768);
	memset(primetable,1,sizeof(primetable));
	primetable[0]=primetable[1]=0;
	for(int a=2;a<=n;a++){
		for(int b=a*a;b<=32768;b+=a)
			primetable[b]=0;
	}
}
int goldbach(int x){
	int y=0;
	for (int i=2;i<=x/2;i++){
		if (primetable[i] && primetable[x-i]) ++y;
	}
	cout<<y<<endl;
}
int main() {
	int n=1;
	sieve();
	while(n!=0){
		cin>>n;
		if(n==0) break;
		goldbach(n);
	}
}
