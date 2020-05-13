#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
	vector<int>adjList[105];
	priority_queue<pair<int,int>> list;
	int m,n,x,y;
	while(cin>>m>>n&&(m!=0||n!=0)){
		while(n--){
			scanf("%d %d",&x,&y);
			adjList[y].push_back(x);
		}
		for(int a=1;a<=m;a++)
			list.push(make_pair(-adjList[a].size(),a));
		while(!list.empty()){
			if(list.size()!=1)
				printf("%d ",list.top().second);
			else
				printf("%d\n",list.top().second);
			list.pop();
		}
		adjList[105].clear();
	}
}
