#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int mod=1e9+7;
void test(){
	int n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int ans=0;
	for(int i=0;i<n;i++){
		ans=(ans+a[i]*i)%mod;
	}
	cout<<ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
	return 0;
}
