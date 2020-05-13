#include<iostream>
#include<ctype.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
	char input[1000][1000];
	char alphabet[27]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	int cnt[26],t;
	cin>>t; getchar();
	for(int a=0;a<t;a++){
		scanf("%[^\n]",input[a]);
		getchar();	
	}
	for(int a=0;a<t;a++){
		int len=strlen(input[a]);
		for(int b=0;b<len;b++){
			input[a][b]=tolower(input[a][b]);
			if(input[a][b]>='a'&&input[a][b]<='z')
				cnt[input[a][b]-'a']++;
		}
	}
	for(int a=0;a<26;a++){
		for(int b=1;b<26-a;b++){
			if(cnt[b]>cnt[b-1]){
				swap(cnt[b],cnt[b-1]);
				swap(alphabet[b],alphabet[b-1]);
			}
		}
	}
	for(int a=0;a<26;a++){
		if(cnt[a]!=0)
			cout<<char(toupper(alphabet[a]))<<" "<<cnt[a]<<endl;
	}
}
