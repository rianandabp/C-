#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	string huruf="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string temp;
	int t,n,k;
	cin>>t;
	for(int a=0;a<t;a++){
		cin>>n>>k;
		for(int b=0;b<n;b++)
			temp+=huruf[b];
		int cnt=0;
		cout<<"Case "<<a+1<<":"<<endl;
		do{
			if(cnt>=k) break;
			cout<<temp<<endl;
			cnt++;
		}while(next_permutation(temp.begin(),temp.end()));
		temp.clear();
	}
}
