#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<cstring>
#include<string>
using namespace std;
int main() {
	int n,a,b;
	long long arr[51]={0,0,1,2};
	cin>>n;
	for(int i=4;i<=50;i++) {
		arr[i]=arr[i-1]+arr[i-2];
	}
	while(n--) {
		cin>>a>>b;
		cout<<arr[b-a+1]<<endl;
	}
	return 0;
}
