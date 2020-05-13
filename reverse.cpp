#include <iostream>

using namespace std;
int reverse(int x) {
    int temp = x;
    int ret  = 0;

    while (temp > 0) {
        ret  = ((ret * 10) + (temp % 10));
        temp = temp / 10;
    }

    return ret;
}

int main() {
	int x,y,sum;
	cin>>x>>y;
	sum=reverse(x)+reverse(y);
	cout<<reverse(sum)<<endl;
}

