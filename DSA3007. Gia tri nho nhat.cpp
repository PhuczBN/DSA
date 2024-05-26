#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test(){
	int n;
	cin>>n;
	ll a[n],b[n];
	ll res=0;
	for(ll &i :a) cin>>i;
	for(ll &i:b) cin>>i;
	sort(a,a+n);
	sort(b,b+n,greater<int>());
	for(int i=0;i<n;i++){
		res+=a[i]*b[i];
	}
	cout<<res;
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
