#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
vector<int>a;
vector<bool>u;
void solve() {
	for(int i=1; i<n; i++) {
		if(abs(a[i]-a[i+1])==1) return;
	}
	for(int i=1; i<=n; i++) {
		cout<<a[i];
	}
	cout<<endl;
}
void Try(int i) {
	for(int j=1; j<=n; j++) {
		if(!u[j]) {
			a[i]=j;
			u[j]=true;
			if(i==n) solve();
			else Try(i+1);
			u[j]=false;
		}
	}
}

void test() {
	cin>>n;
	a.resize(n+1);
	u.resize(n+1,false);
	Try(1);
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
