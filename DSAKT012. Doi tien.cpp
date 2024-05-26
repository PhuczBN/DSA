#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,s,t[30],minn;
bool ok=0;
void Init() {
	cin>>n>>s;
	for(int i=0; i<n; i++) {
		cin>>t[i];
	}
	sort(t,t+n,greater<int>());
}
void  Branch_and_bound(int i, int sum, int cnt) {
	if(ok) return;
	if(sum>s)  return;
	if(sum==s) {
		minn=cnt;
		ok=1;
		return;
	}
	for(int j=i; j<n; j++) {
		Branch_and_bound(i+1,sum+t[i],cnt+1);

	}
}
int main() {
	Init();
	Branch_and_bound(0,0,0);
	if(ok==0) cout<<"-1"<<endl;
	else cout<<minn<<endl;
	return 0;
}
