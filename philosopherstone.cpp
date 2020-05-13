#include<iostream>
using namespace std;
int maximum( int a, int b, int c )
{
   int max = ( a < b ) ? b : a;
   return ( ( max < c ) ? c : max );
}
int main(){
	int t,h,w;
	int tiles [105][105];
	cin>>t;
	while(t--){
		cin>>h>>w;
		for(int a=0;a<h;a++)
			for(int b=0;b<w;b++)
				scanf("%d",&tiles[a][b]);
		for(int a=1;a<h;a++){
			for(int b=0;b<w;b++){
				if(b==0)
					tiles[a][b]=max(tiles[a][b]+tiles[a-1][b],tiles[a][b]+tiles[a-1][b+1]);
				else if(b==w-1)
					tiles[a][b]=max(tiles[a][b]+tiles[a-1][b],tiles[a][b]+tiles[a-1][b-1]);
				else
					tiles[a][b]=maximum(tiles[a][b]+tiles[a-1][b],tiles[a][b]+tiles[a-1][b+1],tiles[a][b]+tiles[a-1][b-1]);
				
			}
		}
		int sum=0;
		for(int a=0;a<w;a++){
			sum=max(sum,tiles[h-1][a]);	
		}
		cout<<sum<<endl;
	}
}
