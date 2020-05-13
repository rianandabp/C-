#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t;
	double input,tax,temp;
	cin>>t;
	for(int a=0;a<t;a++){
		cin>>input; tax=0;
		for(int b=0;b<5;b++){
			 if(b==0){
			 	input=input-180000;
			 	if(input<=0){
			 		tax=0;
					break;	
				 }
			 }
			 else if(b==1){
			 	if(input-300000<=0){
			 		temp=ceil(0.1*double(input));
			 		if(temp<2000&&temp>0&&tax<2000) tax=2000;
			 		else tax=tax+ceil(0.1*double(input));
					break;
				}
				else{
					tax=ceil(300000*0.10);
					input=input-300000;
				}
			 }
			 else if(b==2){
			 	if(input-400000<=0){
			 		temp=ceil(0.15*double(input));
			 		if(temp<2000&&temp>0&&tax<2000) tax=2000;
			 		else tax=tax+ceil(0.15*double(input));
					break;
				}
				else{
					tax=tax+ceil(400000*0.15);
					input=input-400000;
				}
			 }
			 else if(b==3){
			 	if(input-300000<=0){
			 		temp=ceil(0.2*double(input));
			 		if(temp<2000&&temp>0&&tax<2000) tax=2000;
			 		else tax=tax+ceil(0.200*double(input));
					break;
				}
				else{
					tax=tax+ceil(300000*0.2);
					input=input-300000;
				}
			 }
			 else{
			 	tax=tax+ceil(double(input)*0.25);
			 }
		}
		printf("Case %d: %.0lf\n",a+1,tax);
	}
}
