#include<iostream>
#include<string.h>
using namespace std;
int main(){
	long long int cnt[100000],t,len,val;
	cin>>t;
	for(int a=0;a<t;a++){
		memset(cnt,0,sizeof(cnt));
		cin>>val;
		for(int b=1;b<=val;b++){
			if(b>9&&b<=99){
				cnt[b/10]++;
				cnt[b%10]++;	
			}
			else if(b>99&&b<=999){
				cnt[b/100]++;
				cnt[((b%100)/10)]++;
				cnt[b%10]++;
			}
			else if(b>999){
				cnt[b/1000]++;
				cnt[((b%1000)/100)]++;
				cnt[((b%100)/10)]++;
				cnt[b%10]++;	
			}
			else{
				cnt[b]++;
			}	
		}
		for(int b=0;b<10;b++){
			if(b!=9) cout<<cnt[b]<<" ";
			else cout<<cnt[b]<<endl;
		}
	}
}
