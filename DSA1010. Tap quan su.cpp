#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,k;
int a[45],b[45];
void test() {
	cin>>n>>k;
	map<int,int> mp;
	for(int i=1; i<=k; i++) {
		cin>>a[i];
		mp[a[i]]++;
	}
	int i=k;
	while(i>0&&a[i]==n-k+i) i--;
	if(i==0) {
		cout<<k;
		return;
	}
	a[i]++;
	while(i<k) {
		a[i+1]=a[i]+1;
		i++;
	}
	int ans=0;
	for(int i=1; i<=k; i++) {
		if(mp[a[i]]==0) ans++;
	}
	cout<<ans;
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
