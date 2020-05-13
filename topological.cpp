#include<iostream>
#include<string.h>
#include<vector>
#include<stack>
using namespace std;

bool visit[105];
vector<int>adjList[105];
stack<int>ans;

void search(int x){
	int len=adjList[x].size();
	visit[x]=true;
	for(int b=0;b<len;b++){
		if(!visit[adjList[x][b]]){
			search(adjList[x][b]);
		}			
	}
	ans.push(x);	
}
int main(){
	int n,m,x,y;
	while(cin>>n>>m&&(m!=0||n!=0)){
		memset(visit,false,sizeof(visit));
		while(m--){
			cin>>x>>y;
			adjList[x].push_back(y);
		}
		for(int a=1;a<=n;a++){
			if(!visit[a])search(a);	
		}
		while(!ans.empty()){
			if(ans.size()!=1)
				printf("%d ",ans.top());
			else 
				printf("%d\n",ans.top());
			ans.pop();
		}
		adjList[105].clear();
	}
}
