#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int arr[1001];
	int t,cnt;
	while(cin>>t){
		cnt=0;
		for(int a=0;a<t;a++)
			cin>>arr[a];
		for(int a=0;a<t;a++){
			for(int b=1;b<t-a;b++){
				if(arr[b-1]>arr[b]){
					swap(arr[b-1],arr[b]);
					cnt++;
				}
			}
		}
		cout<<"Minimum exchange operations : "<<cnt<<endl;		
	}
}
