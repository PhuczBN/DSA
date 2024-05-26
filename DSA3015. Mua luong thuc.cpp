#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test() {
	int n,s,m;
	cin>>n>>s>>m;
	int x=s*m;
	if(n<m||(n-m)*6<m) cout<<-1;
	else cout<<ceil((float)s*m/n);
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
