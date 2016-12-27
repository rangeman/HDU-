#include<iostream>
#include<sstream>
#include<string>
using namespace std;
//while(--m) !! 也可以用switch case做 
bool isLeapYear(int n) {
	if(n%400==0||(n%4==0&&n%100!=0)) {
		return true;
	}
	return false;
}
int exymd(string a,int &y,int &m,int &d) {
	stringstream stream;
	int pos1=a.find('/');
	int pos2=a.find('/',pos1+1);
	string s=a.substr(0,pos1);
	stream<<s;
	stream>>y;
	stream.clear();
	stream.str("");
	stream.clear();
	s=a.substr(pos1+1,pos2);
	stream<<s;
	stream>>m;
	stream.clear();
	stream.str("");
	s=a.substr(pos2+1);
	stream<<s;
	stream>>d;
	return 0;
}
int main() {
	int y,m,d;
	string a;
	while(cin>>a) {
		exymd(a,y,m,d);
		int count=0;
		int day_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		if(isLeapYear(y)) {
			day_month[1]=29;
		}
		while(--m) {
			count+=day_month[m-1];
		}
		count+=d;
		cout<<count<<endl;
	}
	return 0;
}
