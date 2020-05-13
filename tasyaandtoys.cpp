#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
	long long int k,i,n,sum;
	priority_queue<int>list;
	stack<int>ans;
	cin>>n>>k;
	while(n--){
		cin>>i;
		list.push(-i);
	}
	int temp;
	sum=0;
	for(int a=1;a<=100;a++){
		//cout<<sum<<endl;
		if(sum>=k) break;
		if(!list.empty()&&a==list.top())list.pop();
		else{
			if(k-a<a) temp=a;
			else{
				if(sum+a<=k){
					ans.push(a);
					sum+=a;	
				} else {
					break;
				}
			}	
		}
	}
	cout<<"ini"<<ans.top()<<endl;
	if(!ans.empty()){
		if(ans.top()<=temp)
			ans.push(temp);
	}
	while(!ans.empty()){
		if(ans.size()!=1)
			printf("%d ",ans.top());
		else
			printf("%d\n",ans.top());
			cout<<"yes"<<endl;
		ans.pop();
	}
}
