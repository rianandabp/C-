#include<iostream>
#include<queue>
using namespace std;
int main(){
	int n,k,temp;
	priority_queue<int> val;
	cin>>n>>k;
	for(int a=0;a<n;a++){
		cin>>temp;
		val.push(-temp);
	}
	for(int a=0;;a++){
		if(val.empty()){
			cout<<-1<<endl;
			break;
		}
		if(-val.top()>=k){
			cout<<a<<endl;
			break;
		}
		else{
			int first=-val.top();
			val.pop();
			if(val.empty()){
				cout<<-1<<endl;
				break;
			}
			int second=-val.top();
			val.pop();
			int res=first+(second*2);
			val.push(-res);
		}
	}
}
