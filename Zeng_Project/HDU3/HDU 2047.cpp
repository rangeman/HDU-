#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<cstring>
#include<string>
using namespace std;
//��������������������⣬�����벻ͨ���ʹ������� 
int main() {
	int a;
	long long arr[51]={0,3,8};
	for(int i=3;i<=50;i++) {
		arr[i]=(arr[i-1]+arr[i-2])*2;
	}
	while(cin>>a) {
		cout<<arr[a]<<endl;
	}
	return 0;
}
