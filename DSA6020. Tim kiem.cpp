#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test() {
	int n,x;
	cin>>n>>x;
	vector<bool>v(1e6+1,false);
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v[a]=true;
	}
	if(v[x]) cout<<"1"<<endl;
	else cout<<"-1"<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		test();
	}
	return 0;
}
