#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	string input;
	int cnt1,cnt2,n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>input;
		cnt1=0;cnt2=0;
		for(int a=0;a<input.length();a++){
			if(input[a]=='B')
				cnt2++;
			else
				cnt1++;
		}
		if(cnt1<cnt2) swap(cnt1,cnt2);
		if(cnt2%2==1)
			printf("Case #%d: Gareng\n",i);
		else
			printf("Case #%d: Semar\n",i);
	}
}
