#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define endl "\n"
void test(){
	ll n,x;
	cin>>n>>x;
	ll a[n];
	for(ll &i:a ) cin>>i;
	int pos=upper_bound(a,a+n,x)-a;
	if(pos>0) pos;
	else pos=-1;
	cout<<pos;
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
