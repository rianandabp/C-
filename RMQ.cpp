#include<iostream>
#include<algorithm>
using namespace std;
int arr[100005];
int st[300005];
int getMin(int left,int right,int pos,int r1,int r2){
	if(r1<=left&&r2>=right)
		return st[pos];
	if(left>r2||right<r1)
		return 0;
	int mid=(left+right)/2;
	return min(getMin(left,mid,pos*2+1,r1,r2),getMin(mid+1,right,pos*2+2,r1,r2));
}
int build(int left, int right,int pos){
	if(left==right){
		st[pos]=arr[left];
		return arr[left];
	}
	int mid=(left+right)/2;
	st[pos]=min(build(left,mid,pos*2+1),build(mid+1,right,pos*2+2));
	return st[pos];
}
int main(){
	int t,n,q,x,y;
	scanf("%d",&t);
	int temp=t;
	while(t--){
		scanf("\n%d %d\n",&n,&q);
		cout<<n<<" "<<q<<endl;
		for(int a=0;a<n;a++)
			scanf("%d",&arr[a]);
		printf("Case %d:\n",temp-t);
		build(0,n-1,0);
		for(int a=0;a<q;a++){
			scanf("%d %d",&x,&y);
			printf("%d\n",getMin(0,n-1,0,x-1,y-1));
		}
	}
}
