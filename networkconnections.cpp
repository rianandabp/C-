#include<bits/stdc++.h>
using namespace std;
int parent[100000000];
int find(int x){
	if(parent[x]!=x) return find(parent[x]);
	else return parent[x];
}
int Union(int x,int y){
	int px=find(x); int py=find(y);
	if(px==py) return 0;
	parent[px]=py;
}
int main(){
	int t,n,x,y;
	string input;
	char p;
	cin>>t;
	while(t--){
		int s=0,u=0;
		scanf("\n%d\n",&n);
		for(int a=0;a<=n;a++)
			parent[a]=a;
		while(1){
			if(!getline(cin,input) || input.empty())
				break;
			sscanf(input.c_str(),"%c %d %d",&p,&x,&y);
			if(p=='c')
				Union(x,y);
			else{
				if(find(x)==find(y))
					s++;
				else
					u++;
			}
		}
		if(t==0)printf("%d,%d\n",s,u);
		else printf("%d,%d\n\n",s,u);
	}
}
