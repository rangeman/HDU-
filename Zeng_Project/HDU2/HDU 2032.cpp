#include<iostream>
using namespace std;
int main() {
	int n;
	int a[31][31];
	for(int i=1;i<=30;i++) {
		for(int j=1;j<=i;j++) {
			if(j==1||j==i) {
				a[i][j]=1;
			}
			else {
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
		}
	}
	while(cin>>n) {
		for(int i=1;i<=n;i++) {
			cout<<a[i][1];
			for(int j=2;j<=i;j++) {
				cout<<' '<<a[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
