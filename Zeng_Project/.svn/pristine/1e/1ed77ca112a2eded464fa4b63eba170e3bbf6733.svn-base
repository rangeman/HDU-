#include<iostream>
#include<cmath>
using namespace std;
bool isSu(int n) {
	for(int i=2;i<=sqrt(n);i++) {
		if(n%i==0) {
			return false;
		}
	}
	return true;
}
int main() {
	int a,b,temp;
	bool flag;
	while(cin>>a>>b,a||b) {
		flag=false;
		for(int i=a;i<=b;i++) {
			temp=i*i+i+41;
			if(!isSu(temp)) {
				cout<<"Sorry"<<endl;
				flag=true;
				break;
			}
		}
		if(flag) {
		}
		else {
			cout<<"OK"<<endl;
		}
	}
	return 0;
}
