#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
bool flag[1000];
void sieve(){
	int len=sqrt(1000);
	memset(flag,1,sizeof(flag));
	flag[0]=flag[1]=0;
	for(int a=2;a<len;a++){
		for(int b=a*a;b<=1000;b+=a)
			flag[b]=0;	
	}
}
int find(int n){
	int len=sqrt(n),cnt=0;
	for(int a=1;a<=len;a++){
		if(n%a==0&&a*a!=n) cnt+=2;
		else if(a*a==n) cnt++; 
	}
	return cnt;
}
int main(){
	int t,m,n;
	bool p;
	sieve();
	cin>>t;
	for(int a=0;a<t;a++){
		cin>>m>>n; p=true;
		for(int b=m;b<=n;b++){
			if(flag[find(b)]){
				p=false;
				if(b<n)printf("%d ",b); //kalo belum sampe akhir pake spasi
				else printf("%d\n",b);//kalo udh dienter //contoh 2 3 4 5
			} //tapi outputnya gak ada enter, jadinya PE mulu
		}
		if(p) cout<<-1<<endl;
	}
}
