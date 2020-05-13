#include <iostream>
using namespace std;
int arr['C'][100001];
int tukar(char a,int x, char b, int y) {
		int temp;
		temp=arr[a][x];
		arr[a][x]=arr[b][y];
		arr[b][y]=temp;
	}
int main() {
	int n,a,b,q,x,y;
	char p,u;
	cin>>n;
	for (a='A';a<='B';a++){
		for(b=1;b<=n;b++){
			cin>>arr[a][b];
		}
	}
	cin>>q;
		for(a=1;a<=q;a++){
			cin>>p>>x>>u>>y;
			tukar(p,x,u,y);
		}
	for (a='A';a<='B';a++){
		for(b=1;b<=n;b++){
			if(b==n) cout<<arr[a][b];
			else cout<<arr[a][b]<<" ";
		}
		cout<<endl;
	}	
}
