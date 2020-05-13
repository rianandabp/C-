#include<iostream>
using namespace std;
int n,ans[20]={1};
int prime[]={2,3,5,7,11,13,17,19,23,29,31,37};
bool isPrime(int x){
	for(int a : prime)
		if(a==x) return true;
	return false;
}
int backtracking(int l,bool visit[]){
	if(n==l){
		if(!isPrime(ans[l-1]+1))
			return 0;
		cout<<1;
		for(int a=1;a<n;a++)
			cout<<" "<<ans[a];
			cout<<endl;
		return 0;
	}
	for(int a=2;a<=n;a++){
		if(visit[a]) continue;
		if(isPrime(a+ans[l-1])){
			visit[a]=1;
			ans[l]=a;
			backtracking(l+1,visit);
			visit[a]=0;
		}	
	}
}
int main(){
	int check=0;
	while(cin>>n){
		if(check++) cout<<endl;
		printf("Case %d:\n",check);
		bool visit[20]={0};
		backtracking(1,visit);
	}
}
