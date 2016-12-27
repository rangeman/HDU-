#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
using namespace std;
int f(int n) {
	if(n==1) {
		return 1;
	}
	else {
		return (f(n-1)+1)*2;
	}
}
int main() {
	int n;
	while(cin>>n) {
		cout<<f(n)<<endl;
	}
	return 0;
}
