#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
	double x,y,c;
	while(scanf("%lf %lf %lf",&x,&y,&c)!=EOF){
		int max;
		double left=0,right=min(x,y),mid;
		for(int i=0;i<100;i++){
			mid=(left+right)/2;
			double L=sqrt(abs(pow(mid,2)-pow(x,2)));
			double R=sqrt(abs(pow(mid,2)-pow(y,2)));
			double a=(L/(L+R))*y;
			if(R*a/y<c) right=mid;
			else if(R*a/y>c) left=mid;
			
		}
		printf("%.3lf\n",mid);
	}
}
