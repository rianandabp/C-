#include<iostream>
#include<string.h>
using namespace std;
char mark[105][105];
void write(int x,int y,int m,int n){
    mark[x][y]='*';
	if(x-1>=0&&mark[x-1][y]!='*') mark[x-1][y]++;
	if(y-1>=0&&mark[x][y-1]!='*') mark[x][y-1]++;
	if(x-1>=0&&y-1>=0&&mark[x-1][y-1]!='*') mark[x-1][y-1]++;
	if(x+1<m&&y-1>=0&&mark[x+1][y-1]!='*') mark[x+1][y-1]++;
	if(x+1<m&&mark[x+1][y]!='*') mark[x+1][y]++;
	if(y+1<n&&mark[x][y+1]!='*') mark[x][y+1]++;
	if(x+1<m&&y+1<n&&mark[x+1][y+1]!='*') mark[x+1][y+1]++;
	if(x-1>=0&&y+1<n&&mark[x-1][y+1]!='*') mark[x-1][y+1]++;
}
int main(){
	int n,m,cnt=0;
	while(cin>>m>>n){
	    if(n==0&&m==0) break;
	    if(cnt!=0)puts("");
		memset(mark,'0',sizeof(mark));
		char x;
		for(int a=0;a<m;a++){
			for(int b=0;b<n;b++){
				cin>>x;
				if(x=='*') write(a,b,m,n);
			}
		}
		cout<<"Field #"<<++cnt<<":"<<endl;
		for(int a=0;a<m;a++){
			for(int b=0;b<n;b++)
				printf("%c",mark[a][b]);
			puts("");
		}
	}
}
