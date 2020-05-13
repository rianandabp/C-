#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n){
		long long temp=0,x,ans=0;
		while(n--){
			scanf("%lld",&x);
			temp+=x;
			if(temp<0)
				ans-=temp;
			else
				ans+=temp;
		}
		cout<<ans<<endl;
		cin>>n;
	}
}
