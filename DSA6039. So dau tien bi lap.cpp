#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test() {
	int n;
	cin>>n;
	vector<int> a(n);
	unordered_map<int,int> mp;
	for(int i=0; i<n; i++) {
		cin>>a[i];
		mp[a[i]]++;
	}
	int x=n;
	for(int i=0; i<n; i++) {
		if(mp[a[i]]>1) {
			x=min(x,i);
		}
	}
	if(x==n) cout<<"NO"<<endl;
	else cout<<a[x]<<endl;

}
int main() {
	int t;
	cin>>t;
	while(t--) {
		test();
	}
	return 0;
}
