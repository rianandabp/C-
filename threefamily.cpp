#include<iostream>
using namespace std;
int main(){
	double t,m,n,i;
	double div,res;
	cin>>t;
	for(int a=0;a<t;a++){
		cin>>m>>n>>i;
		div=double((m+n))/double(3);
		res=double(((m-div)*i))/double(((m-div)+(n-div)));
		printf("%.0lf\n",res);
	}
}
