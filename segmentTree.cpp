#include<iostream>
#include<math.h>
#define len 8
using namespace std;
int arr[10]={1,2,3,4,5,6,7,8};
int getSum(int *st,int left,int right,int pos,int r1,int r2){
	if(r1<=left&&r2>=right)
		return st[pos];
	if(right<r1||left>r2)
		return 0;
	int mid=left+(right-left)/2;
	int temp=0;
	return getSum(st,left,mid,pos*2+1,r1,r2)+getSum(st,mid+1,right,pos*2+2,r1,r2);
}
int build(int left,int right,int pos,int *st){
	if(left==right){
		st[pos]=arr[left];
		return arr[left];
	}
	
	int mid=left+(right-left)/2;
	st[pos]= build(left,mid,pos*2+1,st)+build(mid+1,right,pos*2+2,st);
	//cout<<st[pos]<<endl;
	return st[pos];
}
int updateTill(int *st,int left,int right,int i,int dif,int pos){
	if(i<left||i>right) return 0;
	st[pos]=st[pos]+dif;
	if(left!=right){
		int mid=left+(right-left)/2;
		updateTill(st,left,mid,i,dif,pos*2+1);
		updateTill(st,mid+1,right,i,dif,pos*2+2);	
	}
}
int update(int *st,int n,int i,int new_val){
	int dif=new_val - arr[i];
	arr[i]=new_val;
	updateTill(st,0,n-1,i,dif,0);
}
*construct(){
	int x= int(ceil(log2(len)));
	int size= 2*int(pow(2,x))-1;
	int *st= new int(size);
	build(0,len-1,0,st);
	return st;
}
int main(){
	char input;
	int x,y;
	int *st= construct();
	cout<<getSum(st,0,len-1,0,1,6);	
	/*while(scanf("%c %d %d",&input,&x,&y)!=EOF){
		if(input=='u'){
			cout<<input<<x<<y<<endl;
			update(st,len,x-1,y);	
		}
		else if(input=='s'){
			cout<<input<<x<<y<<endl;
			cout<<getSum(st,0,len-1,0,x-1,y-1);	
		}
	}*/
	return 0;
}
