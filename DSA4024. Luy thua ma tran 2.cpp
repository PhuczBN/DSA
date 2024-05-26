#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define endl "\n"
const int mod=1e9+7;
int n,k;
ll a[11][11],d[11][11];
void Mul(ll a[11][11],ll b[11][11]) {
	ll c[11][11]= {};
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			for(int k=1; k<=n; k++) {
				c[i][j]+=a[i][k]*b[k][j];
				c[i][j]%=mod;
			}
		}
	}
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			a[i][j]=c[i][j];
		}
	}
}
void Poww(ll a[11][11],int k) {
	if(k==1) return;
	Poww(a,k/2);
	Mul(a,a);
	if(k%2==1) Mul(a,d);
}
void test() {
	cin>>n>>k;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			cin>>a[i][j];
			d[i][j]=a[i][j];
		}
	}
	Poww(a,k);
	ll ans=0;
	for(int i=1; i<=n; i++) {
		ans+=a[i][n];
		ans%=mod;
	}
	cout<<ans;
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
