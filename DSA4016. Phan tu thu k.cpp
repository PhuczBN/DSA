#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define endl "\n"
void test() {
	int n,m,k;
	cin>>n>>m>>k;
	vector<int>v;
	for(int i=0;i<n+m;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	cout<<v[k-1];
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
