#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define endl "\n"
vector<ll> f(55);
void prepare(){
	f[1]=1;
	for(int i=2;i<55;i++){
		f[i]=f[i-1]*2;
	}
}
void test(){
	ll n,k;
	cin>>n>>k;
	for(int i=n;i>=1;i--){
		if(k>f[i]) k-=f[i];
		else if(k==f[i]){
			cout<<i;
			return;
		}
	}
}
int main() {
	int t;
	cin>>t;
	prepare();
	while(t--) {
		test();
		cout<<endl;
	}
	return 0;
}
