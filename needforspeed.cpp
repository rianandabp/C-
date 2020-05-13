#include<iostream>
using namespace std;
int main(){
	int n,min;
	double t;
	scanf("%d %lf",&n,&t);
	double d[n],v[n];
	for(int a=0;a<n;a++){
		scanf("%lf %lf",&d[a],&v[a]);
		if(a==0) min=v[0];
		if(v[a]<min) min=v[a];	
	}
	double left=min*(-1.0),right=1000000000,mid,res;
	for(int a=0;a<=100;a++){
		res=0;
		mid=(left+right)/2.0;
		for(int a=0;a<n;a++)
			res+=d[a]/(v[a]+mid);
		if(res<t)
			right=mid;
		else
			left=mid;
			
	}
	printf("%.9lf\n",mid);
}
