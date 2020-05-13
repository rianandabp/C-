#include<iostream>
using namespace std;
int main(){
	string kalimat;
	while(getline(cin,kalimat)){
		for(int a=0;a<kalimat.length();a++){
			if(kalimat[a]=='a'||kalimat[a]=='i'||kalimat[a]=='u'||kalimat[a]=='e'||kalimat[a]=='o'||kalimat[a]=='A'||kalimat[a]=='I'||kalimat[a]=='U'||kalimat[a]=='E'||kalimat[a]=='O'){
				while((kalimat[a]>='a'&&kalimat[a]<='z')||(kalimat[a]>='A'&&kalimat[a]<='Z')&&a<kalimat.length()){
					cout<<kalimat[a];
					a++;
				}
				cout<<"ay";
				a--;
			}
			else if((kalimat[a]<'a'||kalimat[a]>'z')&&(kalimat[a]<'A'||kalimat[a]>'Z')){
				printf("%c",kalimat[a]);
			}
			else{
				char temp=kalimat[a];
				a++;
				while((kalimat[a]>='a'&&kalimat[a]<='z')||(kalimat[a]>='A'&&kalimat[a]<='Z')&&a<kalimat.length()){
					cout<<kalimat[a];
					a++;
				}
				cout<<temp;
				cout<<"ay";
				a--;
			}
		}
		cout<<endl;
	}
}
