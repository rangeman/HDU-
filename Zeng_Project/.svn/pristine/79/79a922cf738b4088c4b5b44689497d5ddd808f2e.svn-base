#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<cstring>
#include<string>
using namespace std;
//从汉字机内码的特点考虑~
int main() {
	int n;
	cin>>n;
	cin.ignore();
	string s;
	while(n--) {
		int num=0;
		getline(cin,s);
		for(int i=0;i<s.length();i++) {
			if(s[i]&10000000) {
				num++;
			}
		}
		cout<<num/2<<endl;
	}
	return 0;
}
		
