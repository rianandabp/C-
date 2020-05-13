#include<iostream>
using namespace std;
int main(){
	double h,u,d,f,sum,dec;
	int cnt;
	cin>>h>>u>>d>>f;
	while(h>0){
		dec=u*(float(f/100));
		cnt=0; sum=0;
		while(sum>=0&&sum<h){
			cnt++;
			sum+=u;
			if(sum>h) break;
			sum-=d;
			if(sum<0) break;
			u-=dec;
			if(u<0) u=0;
		}
		if(sum<=0) cout<<"failure on day "<<cnt<<endl;
		else cout<<"success on day "<<cnt<<endl;
		cin>>h>>u>>d>>f;
	}
}
