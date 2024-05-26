#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,x;
vector<pair<int,int>> a;
bool cmp(pair<int, int> a, pair<int, int> b) {
	if (abs(x - a.first) == abs(x - b.first))
		return a.second < b.second;
	return abs(x - a.first) < abs(x - b.first);
}
void test() {
	cin>>n>>x;
	a.resize(n);
	for(int i=0; i<n; i++) {
		cin>>a[i].first;
		a[i].second=i;
	}
	sort(a.begin(),a.end(),cmp);
	for(auto y:a) {
		cout<<y.first<<" ";
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
