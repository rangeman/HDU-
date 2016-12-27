/*
#include<iostream>
#include<sstream>
using namespace std;
int f[1000001]; 
int main() {
	int a,b,count;
	string str;
	stringstream stream;
	for(int i=1;i<=1000000;i++) {
		stream<<i;
		str=stream.str();
		stream.clear();
		stream.str("");
		if(str.find("62")==-1&&str.find('4')==-1) {
			f[i]=1;
		}
		else {
			f[i]=0;
		}
	}
	while(cin>>a>>b,a||b) {
		count=0;
		for(int i=a;i<=b;i++) {
			if(f[i]==1) {
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
*/



//
#include<iostream>
using namespace std;
int f[1000001];
int main() {
	for(int i=1;i<=1000000;i++) {
		int k=i,first=0,last=0;
		while(k) {
			first=k%10;
			if(first==4||first==6&&last==2) {
				f[i]=0;
				break;
			}
			else {
				f[i]=1;
			}
			k/=10;
			last=first;
		}
	}
	int a,b,count;
	while(cin>>a>>b,a||b) {
		count=0;
		for(int i=a;i<=b;i++) {
			if(f[i]==1) {
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}

//进一步改进可以用前缀和，可以到42ms 

#include<stdio.h>
#define N 1000005

int cnt,num[N];

void init()
{
    cnt = 0;
    for(int i = 0; i < N; ++i)
    {
        int k = i;
        int last = 0,next;
        while(k)
        {
            next = k%10;
            if(last==2&&next==6 || next==4)
            {
                cnt++;
                break;
            }
            k /= 10;
            last = next;
        }
        num[i] = cnt;
    }
}

int main()
{
    init();
    int n,m,ans;
    while(~scanf("%d%d", &n,&m)&&n&&m)
    {
        if(n==0)
            ans = num[m];
        else
            ans = m-n+1-num[m]+num[n-1];
        printf("%d\n", ans);
    }
    return 0;
}
