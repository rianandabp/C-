#include<iostream>
#include<math.h>
using namespace std;
int main(){
	string c;
	long long int sum;
	while(cin>>c&&c[0]!='0'){
		sum=0;
		for(int a=0;a<c.length();a++)
			sum=sum+((c[a]-'0')*(pow(2,c.length()-a)-1));	
		cout<<sum<<endl;	
	}
}
