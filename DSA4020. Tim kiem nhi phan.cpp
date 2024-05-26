#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define endl "\n"
void test(){
	int n,k;
	cin>>n>>k;
	vector<int>a(n);
	for(int &i :a){
		cin>>i;
	}
	int pos= lower_bound(a.begin(),a.end(),k) - a.begin();
	if(a[pos]!=k) cout<<"NO";
	else cout<<pos+1;
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
