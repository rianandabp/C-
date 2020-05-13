#include<iostream>
#include<string.h>
#include<set>
using namespace std;
int main(){
	string input;
	set<string>kata;
	while(cin>>input){
		string current="";
		for(int a=0;a<input.length();a++){
			input[a]=char(tolower(input[a]));
			if(input[a]>='a'&&input[a]<='z')
				current+=input[a];
			else if(current!=""){
				kata.insert(current);
				current.clear();
			}
		}
		if(current!="")
			kata.insert(current);
		current.clear();
	}
	for(set<string>::iterator iter=kata.begin();iter!=kata.end();iter++)
		cout<<*iter<<endl;
}
