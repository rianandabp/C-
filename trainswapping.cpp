#include<iostream>
#include<algorithm>
using namespace std;
int sorting(int value[],int l){
	int cnt=0;
	for(int a=0;a<l;a++){
		for(int b=1;b<l-a;b++){
			if(value[b]<value[b-1]){
				swap(value[b-1],value[b]);
				cnt++;
			}
		}
	}
	return cnt;
}
int main(){
	int t,l;
	cin>>t;
	for(int a=0;a<t;a++){
		cin>>l;
		int value[l];
		for(int b=0;b<l;b++)
			cin>>value[b];
		printf("Optimal train swapping takes %d swaps.\n",sorting(value,l));
	}
}
