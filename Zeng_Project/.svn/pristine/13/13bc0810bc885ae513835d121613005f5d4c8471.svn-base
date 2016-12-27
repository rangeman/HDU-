#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<cstring>
#include<string>
using namespace std;
// 递归超时，需要打表！ 
int main() {
	int n,m;
	int arr[41]={0,1,1};
	cin>>n;
	for(int i=3;i<=40;i++) {
		arr[i]=arr[i-1]+arr[i-2];
	}
	while(n--) {
		cin>>m;
		cout<<arr[m]<<endl;
	}
	return 0;
}
		
