#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long int m,n,temp,cnt;
	while(cin>>m>>n&&(m!=0||n!=0)){
		if(n>m) swap(n,m);
		cnt=0; temp=0;
		while(m>0){
			if((m%10)+(n%10)>9){
				cnt++;
				temp=((m%10)+(n%10));
				if(temp==10) temp==1;
				else temp=temp%10;
				m=(m/10)+temp;
				n/=10;
			}
			else{
				//if(m==10) cnt++;
				m/=10; n/=10;	
			}
		}
		if(cnt==0) cout<<"No carry operation."<<endl;
		else cout<<cnt<<" carry operations."<<endl;
	}
}
