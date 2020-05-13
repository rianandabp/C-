#include<iostream>
#include<string.h>
using namespace std;
string tocheck;
int ispal(int down,int up){
	if(down>=up) return 1;
	if(tocheck[down]!=tocheck[up]) return 0;
	ispal(++down,--up);
}
int main(){
	string temp;
	int cnt,len;
	getline(cin,temp);
	while(temp!="DONE"){
		cnt=0;
		len=temp.length();
		for(int a=0;a<len;a++){
			if(temp[a]!=' '&&temp[a]!='.'&&temp[a]!='!'&&temp[a]!='?'&&temp[a]!=','){
				tocheck[cnt]=tolower(temp[a]);
				cnt++;
			}
		}
		if(ispal(0,cnt-1)) cout<<"You won't be eaten!"<<endl;
		else cout<<"Uh oh.."<<endl;
		getline(cin,temp);
	}
}
