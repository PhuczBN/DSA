#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test() {
	int n;
	cin>>n;
	vector<ll> a(n);
	for(auto &i :a) cin>>i;
	sort(a.begin(),a.end());
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			ll C=a[i]*a[i]+a[j]*a[j];
			ll c=sqrt(C);
			if(c*c==C && binary_search(a.begin()+j+1,a.end(),c)) {
				cout<<"YES";
				return;
			}
		}
	}
	cout<<"NO";
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
