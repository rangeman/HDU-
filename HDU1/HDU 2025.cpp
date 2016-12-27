#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<cstring>
#include<string>
using namespace std;
//题错了，竟然只是单纯比较ASCII码，a>A!!! 
int ignoreCase(char c) {
	if(c>='a') {
		return c-'a';
	}
	else {
		return c-'A';
	}
}
int main() {
	string s;
	char max;
	while(cin>>s) {
		for(int i=0;i<s.length();i++) {
			if(i==0) {
				max=s[0];
			}
			else if(max<s[i]) {
				max=s[i];
			}
		}
		for(int i=0;i<s.length();i++) {
			cout<<s[i];
			if(s[i]==max) {
				cout<<"(max)";
			}
		}
		cout<<endl;
	}
	return 0;
}
		
