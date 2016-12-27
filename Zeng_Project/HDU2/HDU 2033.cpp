#include<iostream>
using namespace std;
int main() {
	int n,zf;
	int num[6],r[3];
	cin>>n;
	while(n--) {
		for(int i=0;i<6;i++) {
			cin>>num[i];
		}
		if(num[2]+num[5]>=60) {
			r[2]=num[2]+num[5]-60;
			zf=1;
		}
		else {
			r[2]=num[2]+num[5];
			zf=0;
		}
		if(num[1]+num[4]+zf>=60) {
			r[1]=num[1]+num[4]+zf-60;
			zf=1;
		}
		else {
			r[1]=num[1]+num[4]+zf;
			zf=0;
		}
		r[0]=num[0]+num[3]+zf;
		cout<<r[0]<<' '<<r[1]<<' '<<r[2]<<endl;
	}
	return 0;
}
