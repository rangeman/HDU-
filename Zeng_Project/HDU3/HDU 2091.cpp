#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<cstring>
#include<string>
//¸ñÊ½´ó¿Ó 
using namespace std;
int main() {
	char c,count=1;
	int n;
	while(cin>>c,c!='@') {
		cin>>n;
		if(count!=1) {
			cout<<endl;
		}
		for(int i=0;i<n-1;i++) {
			for(int j=0;j<=(2*n-1)/2+i;j++) {
				if(j==(2*n-1)/2-i||j==(2*n-1)/2+i) {
					cout<<c;
				}
				else {
					cout<<' ';
				}
			}
			cout<<endl;
		}
		for(int i=0;i<2*n-1;i++) {
			cout<<c;
		}
		count=0;
		cout<<endl;
	}
	return 0;
}
		
