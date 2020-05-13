#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int m,n,x,y;
	cin>>m>>n;
	bool visit[m+1];
	vector<int> adjList[m+1];
	vector<pair<int,int>> temp;
	while(n--){
		scanf("%d%d",&x,&y);
		adjList[x].push_back(y);
		adjList[y].push_back(x);	
	}
	for(int a=1;a<=m;a++)
		temp.push_back(make_pair(adjList[a].size(),a));
	sort(temp.begin(),temp.end());
	int cnt=0;
	for(int a=0;a<m;a++){
		if(!visit[temp[a].second]){
			cout<<temp[a].second<<endl;
			cnt++;
			visit[temp[a].second]=1;
			for(int b=0;b<temp[a].first;b++)
				visit[adjList[temp[a].second][b]]=1;
		}
	}
	cout<<cnt<<endl;
}
