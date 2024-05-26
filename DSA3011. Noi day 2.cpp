#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int mod=1e9+7;
void test(){
	int n;
	cin>>n;
	priority_queue<int,vector<int>,greater<int>> pq;
	while(n--){
		int tmp;
		cin>>tmp;
		pq.push(tmp);
	}
	ll ans=0;
	while(pq.size()>1){
		int x=pq.top();
		pq.pop();
		int y=pq.top();
		pq.pop();
		ans=(ans+x+y)%mod;
		pq.push((x+y)%mod);
	}
	cout<<ans%mod;
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
