#include<iostream>
#include<queue>
using namespace std;
int main(){
	int t,m,n;
	char grid[105][105];
	bool visit[105][105];
	queue<pair<int,pair<int,int>>> work;
	cin>>t;
	while(t--){
		cin>>m>>n;
		for(int a=0;a<m;a++){
			for(int b=0;b<n;b++){
				cin>>grid[a][b];
				visit[a][b]=false;
				if(grid[a][b]=='$'){
					work.push(make_pair(a,make_pair(a,b)));
					visit[a][b]=true;
				}
			}
		}
		bool p=true;
		int temp=work.front().first;
		while(!work.empty()){
			int layer=work.front().first;
			int col=work.front().second.second;
			int row=work.front().second.first;
			//cout<<row<<" "<<col<<" "<<layer<<endl;
			if(grid[row][col]=='#'){
				cout<<work.front().first-temp<<endl;
				p=false;
				break;
			}
			work.pop();
			if(row+1<m&&!visit[row+1][col]&&grid[row+1][col]!='*'){
				//cout<<1<<endl;
				work.push(make_pair(layer+1,make_pair(row+1,col)));
				visit[row+1][col]=true;
			}
			if(row-1>=0&&!visit[row-1][col]&&grid[row-1][col]!='*'){
				//cout<<2<<endl;
				work.push(make_pair(layer+1,make_pair(row-1,col)));
				visit[row-1][col]=true;
			}
			if(col+1<n&&!visit[row][col+1]&&grid[row][col+1]!='*'){
				work.push(make_pair(layer+1,make_pair(row,col+1)));
				visit[row][col+1]=true;
			}
			if(col-1>=0&&!visit[row][col-1]&&grid[row][col-1]!='*'){
				//cout<<3<<endl;
				work.push(make_pair(layer+1,make_pair(row,col-1)));
				visit[row][col-1]=true;
			}
		}
		if(p) cout<<-1<<endl;
		else if(not p){
			while(!work.empty())
				work.pop();
		}
	}
}
