#include<iostream>
#include<iomanip>
using namespace std;
//Ҫ��16���Ƽ�������Ŀӣ��������㣩 
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
