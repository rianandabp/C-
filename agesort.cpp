#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long int t;
	while(cin>>t&&t!=0){
		long long int val[t];
		for(int a=0;a<t;a++)
			cin>>val[a];
		sort(val,val+t);
		for(int a=0;a<t-1;a++)
			cout<<val[a]<<" ";
		cout<<val[t-1]<<endl;
	}	
}
