#include<iostream>
#include<cstdio>
#include<queue>
#include<string.h>
using namespace std;
bool map[100001][100001];
bool visit[100001][100001];
int m,n;
int bfs(int x,int y,int i,int j){
	memset(visit,0,sizeof(visit));
	queue<pair<pair<int,int>,int>> work;
	work.push(make_pair(make_pair(x,y),0));
	visit[x][y]=1;
	while(!work.empty()){
		int p1=work.front().first.first;
		int p2=work.front().first.second;
		int step=work.front().second;
		if(p1==i&&p2==j){
			while(!work.empty()) work.pop();
			return step;
		}
		work.pop();
		if(step%2==0){
			if(map[p1][p2]&&p2-1>0&&!visit[p1][p2-1]){
				visit[p1][p2-1]=1;
				work.push(make_pair(make_pair(p1,p2-1),step+1));
			}
			if(map[p1][p2]&&p2+1<=n&&!visit[p1][p2+1]){
				visit[p1][p2+1]=1;
				work.push(make_pair(make_pair(p1,p2+1),step+1));
			}
			if(!map[p1][p2]&&p1-1>0&&!visit[p1-1][p2]){
				visit[p1-1][p2]=1;
				work.push(make_pair(make_pair(p1-1,p2),step+1));
			}
			if(!map[p1][p2]&&p1+1<=m&&!visit[p1+1][p2]){
				visit[p1+1][p2]=1;
				work.push(make_pair(make_pair(p1+1,p2),step+1));
			}	
		} else {
			if(!map[p1][p2]&&p2-1>0&&!visit[p1][p2-1]){
				visit[p1][p2-1]=1;
				work.push(make_pair(make_pair(p1,p2-1),step+1));
			}
			if(!map[p1][p2]&&p2+1<=n&&!visit[p1][p2+1]){
				visit[p1][p2+1]=1;
				work.push(make_pair(make_pair(p1,p2+1),step+1));
			}
			if(map[p1][p2]&&p1-1>0&&!visit[p1-1][p2]){
				visit[p1-1][p2]=1;
				work.push(make_pair(make_pair(p1-1,p2),step+1));
			}
			if(map[p1][p2]&&p1+1<=m&&!visit[p1+1][p2]){
				visit[p1+1][p2]=1;
				work.push(make_pair(make_pair(p1+1,p2),step+1));
			}	
		}
	}
	while(!work.empty()) work.pop();
	return -1;
}
int main(){
	int t,p,x,y,i,j;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&m,&n);
		for(int a=1;a<=m;a++){
			for(int b=1;b<=n;b++){
				scanf("%d",&p);
				map[a][b]=p;
			}
		}
		scanf("%d%d%d%d",&x,&y,&i,&j);
		printf("%d\n",bfs(x,y,i,j));
	}
}
