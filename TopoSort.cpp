#include<iostream>
#include<stack>
#include<vector>
#include<string.h>
using namespace std;
bool visit[105];
stack<int>ans;
vector<int> adjList[105];
void search(int x){
	int len=adjList[x].size();
	visit[x]=true;
	for(int a=0;a<len;a++){
		if(!visit[adjList[x][a]])
			search(adjList[x][a]);
	}
	ans.push(x);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m,x,y;
	while(cin>>n>>m&&(n!=0||m!=0)){
		memset(visit,false,sizeof(visit));
		for(int a=0;a<m;a++){
			cin>>x>>y;
			adjList[x].push_back(y);	
		}
		/*for(int a=1;a<=n;a++){
			cout<<a<<" ";
			for(int b=0;b<adjList[a].size();b++)
				cout<<adjList[a][b]<<" ";
			cout<<endl;
		}*/
		for(int a=1;a<=n;a++)
			if(!visit[a]) search(a);
		while(!ans.empty()){
			if(ans.size()==1)
				cout<<ans.top()<<endl;
			else
				cout<<ans.top()<<" ";
			ans.pop();
		}
		for(int a=1;a<=n;a++)
			adjList[a].clear();
	}
}
