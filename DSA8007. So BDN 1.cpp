#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test() {
	ll n;
	cin>>n;
	queue<ll>q;
	q.push(1);
	ll cnt=1;
	while(1) {
		ll x=q.front();
		q.pop();
		if(x*10<=n) {
			q.push(x*10);
			cnt++;
		} else {
			cout<<cnt;
			return;
		}
		if(x*10+1<=n) {
			q.push(x*10+1);
			cnt++;
		} else {
			cout<<cnt;
			return;
		}
	}
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
