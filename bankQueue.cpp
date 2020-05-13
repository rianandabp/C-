#include<iostream>
#include<vector>
#include<algorithm>
#include<assert.h>
using namespace std;
template <typename K, typename V>
bool comparePairs(const pair<K,V>& lhs, const pair<K,V>& rhs){
	if(lhs.first==rhs.first) return lhs.second > rhs.second;
	else return lhs.first < rhs.first;
}
int main(){
	int n,t,x,y;
	vector<pair<int,int>> antri;
	cin>>n>>t;
	for(int a=0;a<n;a++){
		scanf("%d %d",&x,&y);
		antri.push_back(make_pair(y,x));
	}
	sort(antri.begin(),antri.end(),comparePairs<int,int>);
	while(antri[0].second<antri[t].second){
		 assert(!antri.empty());
    	 antri.erase(antri.begin());
		if(antri.size()==t) break;
	}
	for(auto a:antri)
		cout<<a.first<<" "<<a.second<<endl;
	int sum=0;
	for(int a=0;a<t;a++){
		if(antri[a].first-a<0) break;
		sum+=antri[a].second;
	}
	cout<<sum<<endl;
}
