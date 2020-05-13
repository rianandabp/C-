#include<iostream>
#include<math.h>
#include<vector>
#include<string.h>
using namespace std;
vector<int> prime;
void sieve(int limit){
	bool mark[limit+1];
	memset(mark,false,sizeof(mark));
	for(int a=2;a*a<limit;a++){
		for(int b=a*a;b<limit;b+=a)
			mark[b]=true;
	}
	for(int a=2;a<limit;a++){
	   if(mark[a]==false)
			prime.push_back(a); 
	}
}
void segmentedsieve(int n){
	int limit=floor(sqrt(n))+1;
	sieve(sqrt(limit));
	int low=limit;
	int high=2*limit;
	int size=prime.size();
	while(low<n){
		bool mark[limit+1];
		memset(mark,false,sizeof(mark));
		for(int a=0;a<size;a++){
			int lolim=floor(low/prime[a])*prime[a];
			if(lolim<low)
				lolim+=prime[a];
			for(int b=lolim;b<high;b+=prime[a])
				mark[b-low]=true;
		}
		for(int a=low;a<high;a++)
			if(mark[a-low]==false)
				prime.push_back(a);
		low=low+limit;
		high=high+limit;
		if(high>=n) high=n;	
	}

}
int main(){
	segmentedsieve(500000001);
	int t,low,up;
	scanf("%d",&t);
	for(int a=0;a<t;a++){
		scanf("%d %d",&low,&up);
		for(int b=0;b<prime.size();b++){
		    if(prime[b]>=low&&prime[b]<=up)
		        printf("%d\n",prime[b]);
		    if(prime[b]>up)
		        break;
		}
	}
}
