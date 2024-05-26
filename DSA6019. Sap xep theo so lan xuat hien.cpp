#include<bits/stdc++.h>
using namespace std;
using ll=long long;
bool cmp(pair<int,int>a,pair<int,int>b) {
	if(a.second==b.second) return a.first<b.first;
	return a.second>b.second;
}
void test() {
	int n;
	cin>>n;
	map<int,int>mp;
	for(int i=0; i<n; i++) {
		int x;
		cin>>x;
		mp[x]++;
	}
	vector<pair<int,int>> a(mp.begin(),mp.end());
	sort(a.begin(),a.end(),cmp);
	for(auto it:a) {
		for(int k=1; k<=it.second; ++k) {
			cout<<it.first<<" ";
		}
	}
	cout<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		test();
	}
	return 0;
}
