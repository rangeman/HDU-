#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
bool compare(int a,int b) {
	if(abs(a)>abs(b)) {
		return true;
	}
	return false;
}
int main() {
	int n;
	int a[100];
	while(cin>>n,n) {
		for(int i=0;i<n;i++) {
			cin>>a[i];
		}
		sort(a,a+n,compare);
		cout<<a[0];
		for(int i=1;i<n;i++) {
			cout<<' '<<a[i];
		}
		cout<<endl;
	}
	return 0;
}	
