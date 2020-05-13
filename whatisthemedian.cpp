#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int val[10001],cnt=1;
	while(cin>>val[cnt-1]){
		sort(val,val+cnt);
		int len1=cnt/2-1;
		if(len1<0) len1=0;
		if(cnt%2==1&&cnt!=1) cout<<val[len1+1]<<endl;
		else if(cnt==1) cout<<val[len1]<<endl;
		else cout<<(val[len1]+val[cnt/2])/2<<endl;
		cnt++;
	}
}
