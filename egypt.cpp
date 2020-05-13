#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	unsigned long long int m[5];
	cin>>m[0]>>m[1]>>m[2];
	while(m[0]||m[1]||m[2]){
		if(m[0]%2==0||m[1]%2==0||m[2]%2==0){
			while(m[0]%2==0&&m[1]%2==0&&m[2]%2==0){
				m[0]/=2; m[1]/=2; m[2]/=2;
			}
		}
		sort(m,m+3);
		if((m[0]*m[0])+(m[1]*m[1])==(m[2]*m[2])) cout<<"right"<<endl;
		else cout<<"wrong"<<endl;
		cin>>m[0]>>m[1]>>m[2];
	}
}
