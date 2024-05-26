#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test(){
	vector<int> a;
	vector<int> b;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		if(i%2==1) a.push_back(x);
		else b.push_back(x);
	}
	sort(a.begin(),a.end());
	sort(b.rbegin(),b.rend());
	for(int i=0;i<b.size();i++){
		cout<<a[i]<<" "<<b[i]<<" ";
	}
	if(n%2==1) cout<<a.back();
}
int main(){
		test();
	return 0;
}
