#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define endl "\n"
const int mod=1e9+7;
ll f[100]={};
void prepare(){
	f[0]=0;
	f[1]=1;
	for(int i=2;i<92;i++){
		f[i]=(f[i-1]+f[i-2])%mod;
	}
}
void test(){
	int n;
	cin>>n;
	cout<<f[n];
}
int main() {
	int t;
	cin>>t;
	prepare();
	while(t--) {
		test();
		cout<<endl;
	}
	return 0;
}
