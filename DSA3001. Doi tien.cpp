#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int f[10]={ 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
void test(){
	int n;
	cin>>n;
	int ans=0;
	for(int i=9;i>=0;i--){
		ans+=n/f[i];
		n%=f[i];
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
