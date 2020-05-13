#include<iostream>
using namespace std;
int sumdigit(int x){
	int res;
	res=x%10;
	x=(x/10)+res;
	return x;
}
int main(){
	int t,sum1,sum2,temp;
	string number;
	cin>>t; getchar();
	for(int a=0;a<t;a++){
		getline(cin,number);
		sum1=0; sum2=0;
		for(int a=4;a<=12;a+=4)
			number.erase(a,1);
		for(int a=0;a<16;a+=2){
			temp=(number[a]-'0')*2;
			if(temp<10)
				sum1=sum1+temp;
			else
				sum1=sum1+sumdigit(temp);
		}
		for(int a=1;a<16;a+=2)
			sum2=sum2+(number[a]-'0');
		if((sum1+sum2)%10==0)
			cout<<"Valid"<<endl;
		else
			cout<<"Invalid"<<endl;
	}
}
