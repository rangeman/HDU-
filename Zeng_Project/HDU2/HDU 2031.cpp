#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main() {
	int n,t,c,r;
	char a[32];
	char b[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	bool flag;
	while(cin>>n>>r) {
		if(n<0) {
			t=abs(n);
			flag=false;
		}
		else {
			t=n;
			flag=true;
		}
		c=0;
		while(true) {
			a[c++]=b[t%r];
			t=t/r;
			if(t==0) {
				break;
			}
		}
		if(!flag) {
			cout<<'-';
		}
		for(int i=c-1;i>=0;i--) {
				cout<<a[i];
		}
		cout<<endl;
	}
	return 0;
}
			
	
