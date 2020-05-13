#include <iostream>
using namespace std;

int main()
{
    int x,a,b,m,n;
    bool stat=true;
    cin>>x;
    for(a=1;a<=x;a++){
        for(b=1;b<=x;b++){
            if(a<=x/2+1){
               if (b>(x/2+1)-a && b<=x/2+a){
                   cout<<"*";
                   stat=false;
               }
               else if (stat) cout<<" ";
            }
            else {
              if (b>abs((x/2+1)-a) && b<=x-abs((x/2+1)-a)){
                  cout<<"*";
                  stat=false;
              }
              else if (stat) cout<<" ";
            }
        }
        cout<<endl;
        stat=true;
    }
}
