#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define endl "\n"
const int mod=1e9+7;
ll poww(ll n,ll k){
	if(k==0) return 1;
	ll x=poww(n,k/2);
	if(k%2==0) return (x*x)%mod;
	else return (n*((x*x)%mod))%mod;
}
ll dao(ll n){
	ll res=0;
	while(n>0){
		res=res*10+n%10;
		n/=10;
	}
	return res;
}
void test(){
	ll n;
	cin>>n;
	ll res=dao(n);
	cout<<poww(n,res);
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
