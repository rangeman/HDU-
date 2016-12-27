#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int num(int n) {
	int count=0;
	while(n>=100) {
		n-=100;
		count++;
	}
	while(n>=50) {
		n-=50;
		count++;
	}
	while(n>=10) {
		n-=10;
		count++;
	}
	while(n>=5) {
		n-=5;
		count++;
	}
	while(n>=2) {
		n-=2;
		count++;
	}
	while(n>0) {
		n-=1;
		count++;
	}
	return count;
}
int main() {
	int n,sum,m;
	while(cin>>n,n) {
		sum=0;
		for(int i=0;i<n;i++) {
			cin>>m;
			sum+=num(m);
		}
		cout<<sum<<endl;
	}
	return 0;
}
		
