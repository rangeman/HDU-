#include<iostream>
#include<iomanip>
using namespace std;
//要填16进制计算问题的坑（补码运算） 
int main() {
	long long a,b,c;
	while(cin>>hex>>a>>b) {
		c=a+b;
		if(c<0) {
			c=-c;
			cout.setf(ios::uppercase);
			cout<<hex<<'-'<<c<<endl;
		}
		else {
			cout.setf(ios::uppercase);
			cout<<hex<<c<<endl;
		}
	}
	return 0;
}
