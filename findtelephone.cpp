#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string nama;
	char list[10][5]={"ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
	while(getline(cin,nama)){
		for(int a=0;a<nama.length();a++){
			if(int(nama[a])<65||int(nama[a])>90)
				cout<<nama[a];
			else{
				for(int b=0;b<9;b++){
					for(int c=0;c<4;c++){
						if(nama[a]==list[b][c]){
							cout<<b+2; break;
						}
					}
				}
			}
		}
		cout<<endl;
	}
}
