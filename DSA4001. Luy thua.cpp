#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define endl "\n"
const int mod=1e9+7;
long long poww(ll n,ll k){
	if(k==0) return 1;
	if(k==1) return n;
	ll x=poww(n,k/2);
	ll y=x*x%mod;
	if(k%2==0) return y;
	else return (n*y)%mod;
}
void test(){
	int n,k;
	cin>>n>>k;
	cout<<poww(n,k);
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
