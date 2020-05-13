#include<iostream>
using namespace std;
int main(){
	int m,s,temp,a;
	string minn,max;
	cin>>m>>s;
	if(s==0){
		if(m==1) cout<<"0 0"<<endl;
		else cout<<"-1 -1"<<endl;
		return 0;
	}
	for(int a=0;a<m;a++){
		temp=min(s,9);
		max+=temp+'0';
		s-=temp;
	}
	if(s!=0){
		cout<<"-1 -1"<<endl;
		return 0;
	}
	for(int a=m-1;a>=0;a--){
		minn+=max[a];
	}
	cout<<minn<<endl;
	for (a=0;minn[a]=='0';a++);
    	minn[a]--, minn[0]++;
	cout<<minn<<" "<<max<<endl;
}
