#include <bits/stdc++.h>
using namespace std;
vector<int> prime;
bool memo[1000005];
int sieve(){
	bool mark[1000005];
	memset(mark,true,sizeof(mark));
	for(int a=2;a*a<=65536;a++){
		if(mark[a]==true){
			for(int b=a*a;b<=65536;b+=a)
				mark[b]=false;
		}
	}
	prime.push_back(2);
	for(int a=3;a<=65536;a+=2)
		if(mark[a]==true)
			prime.push_back(a);
}
int segmentedsieve(long long int low,long long int up){
	memset(memo,true,sizeof(memo));
	for(int a=0;(a<prime.size()&&prime[a]*prime[a]<=up);a++){
		int lolim=(low/prime[a])*prime[a];
		if(lolim<low) lolim+=prime[a];
		if(lolim==prime[a]) lolim+=prime[a];
		for(int b=lolim-low;b<=up-low;b+=prime[a])
			memo[b]=false;
	}
}
int main(){
	sieve();
	vector<int> temp;
	long long int low,up;
	while(scanf("%lld %lld",&low,&up)!=EOF){
		temp.clear();
		segmentedsieve(low,up);
		for(long long int a=low;a<=up;a++)
			if(memo[a-low]==true&&a!=1)
				temp.push_back(a);
	long long int a1=0,a2=0,b1=0,b2=0,min=0,max=0;
	if(temp.size()<=1)
		printf("There are no adjacent primes.\n");
	else{
		min=abs(temp[1]-temp[0]);
		max=abs(temp[1]-temp[0]);
		a1=temp[0]; a2=temp[1];
		b1=temp[0]; b2=temp[1];
		for(int a=1;a<temp.size();a++){
			if(abs(temp[a]-temp[a-1])<min){
				min=abs(temp[a]-temp[a-1]);
				a1=temp[a-1]; a2=temp[a];
			}
			if(abs(temp[a]-temp[a-1])>max){
				max=abs(temp[a]-temp[a-1]);
				b1=temp[a-1]; b2=temp[a];
			}
		}
		printf("%lld,%lld are closest, %lld,%lld are most distant.\n",a1,a2,b1,b2);
	}
	}
}
