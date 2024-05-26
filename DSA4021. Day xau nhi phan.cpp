#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define endl "\n"
long long f[93];
void prepare(){
	f[1]=f[2]=1;
	for(int i=3;i<93;i++){
		f[i]=f[i-2]+f[i-1];
	}
}
void test(){
	ll n,k;
	cin>>n>>k;
	while(true){
		if(n==1) {
			cout<<0;
			return;
		}
		if(n==2){
			cout<<1;
			return;
		}
		if(k<=f[n-2]){
			n-=2;
		}
		else{
			k-=f[n-2];
			n--;
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
