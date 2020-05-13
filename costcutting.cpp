#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t;
	int arr[3];
	cin>>t;
	for(int a=1;a<=t;a++){
		for(int b=0;b<3;b++){
			cin>>arr[b];
		}
		sort(arr,arr+3);
		cout<<"Case "<<a<<": "<<arr[1]<<endl;
	}
}

