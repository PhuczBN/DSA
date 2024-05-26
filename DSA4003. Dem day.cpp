#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define endl "\n"
const int mod=123456789;
ll poww(ll n,ll k){
	if(k==0) return 1;
	if(k==1) return n;
	ll x=poww(n,k/2);
	if(k%2==0) return (x*x)%mod;
	else return (n*((x*x)%mod))%mod;
}
void test(){
	ll n;
	cin>>n;
	cout<<poww(2,n-1);
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
