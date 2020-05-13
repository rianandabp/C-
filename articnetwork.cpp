#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<iomanip>
#include<math.h>
using namespace std;
int parent[505];
int find(int x){
	if(parent[x]!=x){
		parent[x]=find(parent[x]);
		return parent[x];
	}
	else return parent[x];
}
int Union(int x,int y){
	int px=find(x); int py=find(y);
	if(px==py) return 0;
	parent[px]=py;
	return 1;
}
int main(){
	int t,n,m;
	double d,x,y;
	cin>>t;
	while(t--){
		cin>>m>>n;
		vector<pair<double,double>> input;
        vector<pair<double,pair<int,int>>> temp;
        priority_queue<double>ans;
        for(int a=0;a<n;a++){
            parent[a]=a;
            scanf("%lf %lf",&x,&y);
            input.push_back(make_pair(x,y));
        }
        int cnt=0;
        for(int a=0;a<n;a++){
            for(int b=a+1;b<n;b++){
                cnt++;
                d=sqrt((input[a].first-input[b].first)*(input[a].first-input[b].first)+(input[a].second-input[b].second)*(input[a].second-input[b].second));
                temp.push_back(make_pair(d,make_pair(a,b)));
                //cout<<temp[cnt-1].first<<" "<<temp[cnt-1].second.first<<" "<<temp[cnt-1].second.second<<endl;
            }
        }
        sort(temp.begin(),temp.end());
        for(int a=0;a<cnt;a++){
            if(Union(temp[a].second.first,temp[a].second.second))
                ans.push(temp[a].first);
        }
        for(int a=1;a<=ans.size();a++){
        	
        	if(a==m){
        		cout<<fixed<<setprecision(2)<<ans.top()<<endl;
        		break;
			}
			ans.pop();
		}
	}
}
