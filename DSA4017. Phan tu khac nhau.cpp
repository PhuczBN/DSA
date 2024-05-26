#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define endl "\n"
void test(){
	int n;
	cin>>n;
	vector<int>a;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a.push_back(x);
	}
	int ans=-1;
	for(int i=0;i<n-1;i++){
		int x;
		cin>>x;
		if(x!=a[i]&&ans==-1){
			ans=i+1;
		}
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
