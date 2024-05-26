#include<bits/stdc++.h>
using namespace std;
using ll=long long;
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
		ans+=x+y;
		pq.push(x+y);
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
