#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
using namespace std;
bool isShui(int n) {
	int temp,sum=0;
	temp=n/100;
	sum+=temp*temp*temp;
	temp=n%100/10;
	sum+=temp*temp*temp;
	temp=n%10;
	sum+=temp*temp*temp;
	if(sum==n) {
		return true;
	}
	return false;
}
int main() {
	int m,n,count;
	while(cin>>m>>n) {
		int flag[1005]={0};
		count=0;
		for(int i=m;i<=n;i++) {
			if(isShui(i)) {
				flag[count++]=i;
			}
		}
		sort(flag,flag+count);
		if(count==0) {
			cout<<"no"<<endl;
		}
		else {
			cout<<flag[0];
			for(int i=1;i<count;i++) {
				cout<<' '<<flag[i];
			}
			cout<<endl;
		}
	}
	return 0;
}
