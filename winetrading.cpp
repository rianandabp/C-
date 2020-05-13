#include<iostream>
using namespace std;
int num[100005];
int main(){
	int n;
	cin>>n;
	while(n){
		int cnt=0;
		for(int a=0;a<n;a++)
			scanf("%d",&num[a]);
		for(int a=0;a<n;a++){
			if(num[a]!=0&&num[a]<0){
				int i=a;
				i++;
				while(num[a]!=0){
					if(num[i]>0){
						if(abs(num[a])<num[i]){
							num[a]=0;
							num[i]=num[i]+num[a];
							cnt+=abs(num[a])*(abs(i-a));
						}
						else{
							num[a]=num[a]+num[i];
							cnt+=num[i]*(abs(i-a));
						}
					}
					i++;	
				}
			}
			else if(num[a]!=0&&num[a]>0){
				int i=a;
				i++;
				while(num[a]!=0){
					if(num[i]<0){
						if(abs(num[i])>num[a]){
							num[a]=0;
							num[i]=num[i]+num[a];
							cnt+=num[a]*(abs(i-a));
						}
						else{
							num[a]=num[a]+num[i];
							cnt+=abs(num[i])*(abs(i-a));
						}
					}
					i++;	
				}
			}
		}
		for(int a=0;a<n;a++)
			cout<<num[a]<<endl;
		cout<<cnt<<endl;
		cin>>n;
	}
}
