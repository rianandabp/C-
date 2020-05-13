#include<iostream>
#include<queue>
using namespace std;
queue<int>discarded;
queue<int>card;
int main(){
	int n;
	while(cin>>n&&n!=0){
		for(int a=1;a<=n;a++)
			card.push(a);
		int cnt=0;
		while(card.size()!=1){
			cnt++;
			if(cnt%2==1){
				discarded.push(card.front());
				card.pop();
			}
			else{
				card.push(card.front());
				card.pop();
			}
		}
		printf("Discarded cards:");
		int len=discarded.size();
		for(int a=1;a<=len;a++){
			if(a!=len)
				printf(" %d,",discarded.front());
			else
				printf(" %d",discarded.front());
			discarded.pop();
		}
		cout<<endl;
		printf("Remaining card: %d\n",card.front());
		card.pop();	
	}
	return 0;
}
