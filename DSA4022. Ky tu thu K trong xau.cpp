#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define endl "\n"
vector<int> f(30);
void prepare(){
	f[1]=1;
	for(int i=2;i<30;i++){
		f[i]=f[i-1]*2;
	}
}
void test(){
	int n,k;
	cin>>n>>k;
	for(int i=n;i>=1;i--){
		if(k>f[i]) k-=f[i];
		else if(k==f[i]){
			cout<<char(i-1+'A');
			return;
		}
	}
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
