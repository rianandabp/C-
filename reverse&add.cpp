#include<iostream>
using namespace std;
int reverse(unsigned int x){
	unsigned int remainder=0,result=0;
	while(x!=0){
		remainder= x%10;
		result=result*10+remainder;
		x/=10;
	}
	return result;
}
int ispal(unsigned int val){
	unsigned int pal=reverse(val);
	if(val==pal) return 1;
	else return 0;
}
int main(){
	unsigned int value,sum;
	int t,cnt;
	cin>>t;
	for(int a=0;a<t;a++){
		cin>>value;
		cnt=0;
		sum=value+reverse(value);
		while(not ispal(sum)){
			sum=value+reverse(value);
			value=sum;
			cnt++;
		}
		if(cnt==0) cnt++;
		cout<<cnt<<" "<<sum<<endl;
	}
}
