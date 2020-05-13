#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t,n;
	bool p;
	cin>>t;
	for(int a=0;a<t;a++){
		cin>>n;
		int val[n];
		p=true;
		for(int b=0;b<n;b++){
			cin>>val[b];
		}
		sort(val,val+n);
		for(int b=1;b<n;b++){
			if(abs(val[b]-val[b-1])>1){
				cout<<"NO"<<endl;
				p=false;
				break;
			}
		}
		if(p) cout<<"YES"<<endl;	
	}
}
