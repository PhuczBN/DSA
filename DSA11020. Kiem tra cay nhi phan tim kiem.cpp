#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define endl "\n"
void test(){
	int n;
	cin>>n;
	vector<int>a;
	set<int>se;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a.push_back(x);
		se.insert(x);
	}
	
	vector<int> b(se.begin(),se.end());
	if(b==a) cout<<1;
	else cout<<0;
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
