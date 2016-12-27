#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
	int n,m,sum,count,flag;
	int s[50][5];
	double avg_score[5],avg_student[50];
	while(cin>>n>>m) {
		for(int i=0;i<n;i++) {
			sum=0;
			for(int j=0;j<m;j++) {
				cin>>s[i][j];
				sum+=s[i][j];
			}
			avg_student[i]=double(sum)/m;
		}
		for(int j=0;j<m;j++) {
			sum=0;
			for(int i=0;i<n;i++) {
				sum+=s[i][j];
			}
			avg_score[j]=double(sum)/n;
		}
		count=0;
		for(int i=0;i<n;i++) {
			flag=0;
			for(int j=0;j<m;j++) {
				if(s[i][j]<avg_score[j]) {
					flag=1;
				}
			}
			if(!flag) {
				count++;
			}
		}
		int k=0;
		for(int i=0;i<n;i++) {
			if(k==1) {
				cout<<' ';
			}
			cout<<fixed<<showpoint<<setprecision(2)<<avg_student[i];
			k=1;
		}
		cout<<endl;
		k=0;
		for(int j=0;j<m;j++) {
			if(k==1) {
				cout<<' ';
			}
			cout<<fixed<<showpoint<<setprecision(2)<<avg_score[j];
			k=1;
		}
		cout<<endl;
		cout<<count<<endl<<endl;
	}
	return 0;
}
		
