#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int a,b,count,t;
	int n[200];
	while(cin>>a>>b,a+b) {
		int m[100]={0};
		int p[100]={0};
		count=a;
		for(int i=0;i<a+b;i++) {
			cin>>n[i];
		}
		for(int i=0;i<a;i++) {
			for(int j=a;j<a+b;j++) {
				if(n[i]==n[j]) {
					m[i]=1;
					count--;
					break;
				}
			}
		}
		t=count;
		for(int i=0;i<a;i++) {
			if(m[i]==0) {
				p[--t]=n[i];
			}
		}
		sort(p,p+count);
		if(count!=0) {
			for(int i=0;i<count;i++) {
				cout<<p[i]<<' ';
			}
		}
		else {
			cout<<"NULL";
		}
		cout<<endl;
	}
	return 0;
}
