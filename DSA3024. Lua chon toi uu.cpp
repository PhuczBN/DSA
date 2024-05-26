#include<bits/stdc++.h>
using namespace std;
using ll=long long;
bool cmp(pair<int,int>a,pair<int,int>b) {
	if(a.second==b.second) return a.first>b.first;
	return a.second<b.second;
}
void test() {
	int n;
	cin>>n;
	pair<int,int> a[n];
	for(int i=0; i<n; i++) {
		cin>>a[i].first>>a[i].second;
	}
	sort(a,a+n,cmp);
	int ans=0,time=0;
	for(int i=0; i<n; i++) {
		if(a[i].first<time) continue;
		ans++;
		time=a[i].second;
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
