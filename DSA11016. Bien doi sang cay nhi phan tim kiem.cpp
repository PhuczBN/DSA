#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define endl "\n"
void test(){
	int n;
	cin>>n;
	set<int> se;
	for(int i=0;i<n;i++){
		int u,v;
		string x;
		cin>>u>>v>>x;
		se.insert(u);
		se.insert(v);
	}
	for(auto i:se){
		cout<<i<<" ";
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
