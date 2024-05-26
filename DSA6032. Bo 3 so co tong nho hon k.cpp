#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test(){
	int n,k;
	cin>>n>>k;
	ll a[5000], ans=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			ll x=k-a[i]-a[j];
			ans+=lower_bound(a+j+1,a+n,x)-(a+j+1);
		}
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
