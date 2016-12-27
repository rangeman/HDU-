#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<cstring>
using namespace std;
// A-Z 65 90 a-z 97 122 0-9 48 57 _ 95
int main() {
	int n;
	bool flag;
	char s[50];
	cin>>n;.
	cin.ignore();
	while(n--) {
		cin.getline(s,50,'\n');
		flag=true;
		int l=strlen(s);
		if(!(s[0]=='_'||s[0]>='a'&&s[0]<='z'||s[0]>='A'&&s[0]<='Z')) {
			flag=false;
		}
		for(int i=1;i<l;i++) {
			if(!(s[i]=='_'||s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]>='0'&&s[i]<='9')) {
				flag=false;
			}
		}
		if(flag) {
			cout<<"yes"<<endl;
		}
		else {
			cout<<"no"<<endl;
		}
	}
	return 0;
}
		
