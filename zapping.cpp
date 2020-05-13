#include<iostream>
using namespace std;
int main(){
	int m,n;
	while(cin>>m>>n&&m>=0&&n>=0){
		if(n-m<=50&&n-m>=0) cout<<n-m<<endl;
		else if(n-m>50&&n-m>=0) cout<<(100-n)+m<<endl;
		else if(n-m<0&&(100-m)+n<=50) cout<<(100-m)+n<<endl;
		else cout<<m-n<<endl;
	}
}
