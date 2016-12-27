#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a,b,p,l;
	while(cin>>a>>b) {
		p=0;
		l=0;
		if(a>b) {
			int temp=a;
			a=b;
			b=temp;
		}	
		for(int i=a;i<=b;i++) {
			if(i%2==0) {
				p+=i*i;
			}
			else {
				l+=i*i*i;
			}
		}
		cout<<p<<' '<<l<<endl;
	}
	return 0;
}
