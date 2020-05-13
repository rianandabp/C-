#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int primetable[1000000];
int sieve(){
	int n=sqrt(1000000);
	memset(primetable,1,sizeof(primetable));
	primetable[0]=primetable[1]=0;
	for(int a=2;a<=n;a++){
		for(int b=a*a;b<=1000000;b+=a)
			primetable[b]=0;
	}
	primetable[2]=0;
}
int main(){
	int t,i;
	sieve();
	for(int a=0;a<10;a++)
		cout<<primetable[a]<<endl;
	while(cin>>t&&t!=0){
		for(int a=3;a<=1000000;a++){
			if(primetable[a])
				i=t-a;
			if(primetable[i]){
				printf("%d = %d + %d\n",t,a,i);
				break;
			}
		}
	}
}

