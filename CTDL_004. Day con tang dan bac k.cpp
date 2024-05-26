#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,k;
int a[105];
int b[105];
int cnt;
int check() {
	for(int i=1; i<k; i++) {
		if(a[b[i]]>=a[b[i+1]]) return 0;
	}
	return 1;
}

void Try(int i) {
	for(int j=b[i-1]+1; j<=n-k+i; j++) {
		b[i]=j;
		if(i==k) {
			if(check()) cnt++;
		} else Try(i+1);
	}
}
void test() {
	cin>>n>>k;
	cnt=0;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	Try(1);
	cout<<cnt;
}
int main() {
	test();
	return 0;
}
