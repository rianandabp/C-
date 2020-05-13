#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(pair<int,int>a, pair<int,int> b)
{
	if(a.second == b.second){
		return a.first < b.first;
	}
	
	return a.second > b.second;
}
int main(){
	int n,m,a,b;
	int x,y,l;
	char p;
	int player=0;
	int map[105][105];
	int len[105][105];
	int temp[105][105];
	int score[10];
	bool res[10];
	vector<pair<int,int>> ans;
	vector<pair<int,int>> ans1;
	vector<pair<int,int>> ans2;
	cin>>n>>m>>a>>b;
	memset(map,0,sizeof(map));
	for(int i=0;i<n*m;i++){
		if(i%m==0) player++;
		cin>>x>>y>>l>>p;
		if(p=='s'){
			for(int j=x;j<x+l;j++){
				if(map[j][y]!=0){
					cout<<"ERROR_LOCATION_DETECTED"<<endl;
					return 0;
				}
				map[j][y]=player;
				len[j][y]=l;
				temp[j][y]=l;
			}
		}
		else if(p=='n'){
			for(int j=x;j>x-l;j--){
				if(map[j][y]!=0){
					cout<<"ERROR_LOCATION_DETECTED"<<endl;
					return 0;
				}
				map[j][y]=player;
				len[j][y]=l;
				temp[j][y]=l;
			}
		}
		else if(p=='e'){
			for(int j=y;j<y+l;j++){
				if(map[j][y]!=0){
					cout<<"ERROR_LOCATION_DETECTED"<<endl;
					return 0;
				}
				map[y][j]=player;
				len[y][j]=l;
				temp[y][j]=l;	
			}
		}
		else{
			for(int j=y;j>y-l;j--){
				if(map[j][y]!=0){
					cout<<"ERROR_LOCATION_DETECTED"<<endl;
					return 0;
				}
				map[y][j]=player;
				len[y][j]=l;
				temp[y][j]=l;
			}
		}
	}
	/*for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++)
			cout<<map[i][j];
		cout<<endl;
	}*/
	int tst;
	cin>>tst;
	player=1;
	for(int i=0;i<tst;i++){
		if(i%n==0) player=1;
		cin>>x>>y;
		if(map[x][y]==player){
			score[player]+=-(10*(len[x][y]-(--temp[x][y])));
			while(map[x-1][y]==map[x][y]){
				temp[x-1][y]--;
				x--;
			}
			while(map[x+1][y]==map[x][y]){
				temp[x+1][y]--;
				x++;	
			}
			while(map[x][y-1]==map[x][y]){
				temp[x][y-1]--;
				y--;	
			}
			while(map[x][y+1]==map[x][y]){
				temp[x][y+1]--;
				y++;	
			}
			map[x][y]=0;
		}
		else if(map[x][y]!=0){
			score[player]+=(10*(len[x][y]-(--temp[x][y])));
			while(map[x-1][y]==map[x][y]){
				temp[x-1][y]--;
				x--;
			}
			while(map[x+1][y]==map[x][y]){
				temp[x+1][y]--;
				x++;	
			}
			while(map[x][y-1]==map[x][y]){
				temp[x][y-1]--;
				y--;	
			}
			while(map[x][y+1]==map[x][y]){
				temp[x][y+1]--;
				y++;	
			}
			map[x][y]=0;
		}
		player++;
	}
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			if(map[i][j]!=0)
				res[map[i][j]]=1;
		}
	}
	for(int i=1;i<=n;i++)
		ans.push_back(make_pair(score[i],i));
	for(int i=0;i<ans.size();i++){
		if(res[ans[i].second]==0){
			ans1.push_back(make_pair(ans[i].first,ans[i].second));
		}
		else
			ans2.push_back(make_pair(ans[i].first,ans[i].second));
	}
	sort(ans2.rbegin(),ans2.rend(),cmp);
	sort(ans1.rbegin(),ans1.rend(),cmp);
	for(int i=0;i<ans2.size();i++)
		printf("%d\n",ans2[i].second);
	for(int i=0;i<ans1.size();i++)
		printf("%d\n",ans1[i].second);
}
