#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test() {
	int n;
	cin>>n;
	int a[n];
	int cnt=0;
	map<int,int>mp;
	for(int i=0; i<n; i++) {
		cin>>a[i];
		mp[a[i]]=1;
	}
	sort(a,a+n);
	for(int i=a[0]; i<a[n-1]; i++) {
		if(!mp[i]) cnt++;
	}
	cout<<cnt;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		test();
		cout<<endl;
	}
	return 0;
}
