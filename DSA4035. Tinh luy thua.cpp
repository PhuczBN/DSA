#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define endl "\n"
const int mod=1e9+7;
ll poww(ll n,ll k){
	if(k==0) return 1;
	if(k==1) return n;
	ll x=poww(n,k/2);
	if(k%2==0) return (x*x)%mod;
	else return(n*((x*x)%mod))%mod;
}
void test(){
	ll a,b;
	while(1){
		cin>>a>>b;
		if(a==0&&b==0) return;
		else cout<<poww(a,b);
		cout<<endl;
	}
}
int main() {
	int t=1;
	while(t--) {
		test();
	}
	return 0;
}
