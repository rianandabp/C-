#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
	int t,n,data[1001],temp;
	double sum,check;
	cin>>t;
	for(int a=0;a<t;a++){
		cin>>n;
		sum=0; temp=0; check=0;
		for(int b=0;b<n;b++){
			cin>>data[b];
			sum=sum+data[b];
		}
		sum=sum/n;
		sort(data,data+n);
		for(int b=0;b<n;b++){
			if(data[b]>sum){
				temp=b; break;	
			}
		}
		check=(double((n-temp))/double(n));
		if(check!=1)printf("%.3lf%%\n",check*100);
		else printf("%.3lf%%\n",0);
	}
}
