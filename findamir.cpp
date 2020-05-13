#include<iostream>
using namespace std;
int main(){
	int input,ans;
	cin>>input;
	if(input%2==0){
		ans=input/2;
		if(ans>0) ans--;
	}
	else
		ans=input/2;
	cout<<ans<<endl;
}
