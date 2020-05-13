#include<iostream>
#include<string.h>
using namespace std;
bool mark[1000005];
int st[40005];
int lazy[40005];
int arr[10005];
void sieve(){
	memset(mark,false,sizeof(mark));
	for(int a=2;a*a<=1000000;a++){
		for(int b=a*a;b<=1000000;b+=a)
			mark[b]=true;
	}
}
int isPrime(int x){
	if(!mark[x]) return 1;
	else return -1;
}
int updateTill(int left,int right,int pos,int r1,int r2,int val){
	if(lazy[pos]!=0){
		st[pos]+=(right-left+1)*lazy[pos];
		if(st[pos]<0){
			st[pos]=0;
			lazy[pos]=0;	
		}
		if(left!=right){
			lazy[pos*2+1]+=lazy[pos];
			lazy[pos*2+2]+=lazy[pos];
		}
		lazy[pos]=0;
	}
	if(left>right||left>r2||right<r1)
		return 0;
	if(left>=r1&&right<=r2){
		st[pos]+=(right-left+1)*isPrime(val);
		if(st[pos]<0) st[pos]=0;
		if(left!=right){
			lazy[pos*2+1]+=isPrime(val);
			lazy[pos*2+2]+=isPrime(val);
		}
		return 0;
	}
	int mid=(left+right)/2;
	st[pos]=updateTill(left,mid,pos*2+1,r1,r2,val)+updateTill(mid+1,right,pos*2+2,r1,r2,val);
	return st[pos];
}
int getSum(int left,int right,int pos,int r1,int r2){
	if(lazy[pos]!=0){
		st[pos]+=(right-left+1)*lazy[pos];
		if(st[pos]<0){
			st[pos]=0;
			lazy[pos]=0;
		}
		if(left!=right){
			lazy[pos*2+1]+=lazy[pos];
			lazy[pos*2+2]+=lazy[pos];
		}
		lazy[pos]=0;
	}
	if(left>right||left>r2||right<r1)
		return 0;
	if(left>=r1&&right<=r2)
		return st[pos];
	int mid=(left+right)/2;
	return getSum(left,mid,pos*2+1,r1,r2)+getSum(mid+1,right,pos*2+2,r1,r2);
}
int build(int left,int right,int pos){
	if(left==right){
		st[pos]=isPrime(arr[left]);
		if(st[pos]<0) st[pos]=0;
		return st[pos];
	}
	int mid=(left+right)/2;
	st[pos]=build(left,mid,pos*2+1)+build(mid+1,right,pos*2+2);
	return st[pos];
}
int main(){
	sieve();
	int t,input,x,y,v,n,q;
	scanf("%d",&t);
	int temp=t;
	while(t--){
		printf("Case %d:\n",temp-t);
		scanf("%d %d",&n,&q);
		for(int a=0;a<n;a++)
			scanf("%d",&arr[a]);
		while(q--){
			scanf("%d",&input);
			if(input){
				scanf("%d %d %d",&x,&y,&v);
				updateTill(0,n-1,0,x-1,y-1,v);
			} else {
				scanf("%d %d",&x,&y);
				printf("%d\n",getSum(0,n-1,0,x-1,y-1));
			}
		}
	}
}
