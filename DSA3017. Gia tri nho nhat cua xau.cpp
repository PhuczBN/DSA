#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test(){
	int k;
	cin>>k;
	string s;
	cin>>s;
	int cnt[256]={};
	for(char c:s) cnt[c]++;
	priority_queue<int,vector<int>>pq;
	for(int i:cnt){
		if(i) pq.push(i);
		
	}
	while(k--){
		int t=pq.top();
		pq.pop();
		t--;
		if(t) pq.push(t);
	}
	ll ans=0;
	while(pq.size()){
		ans+=pq.top()*pq.top();
		pq.pop();
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
