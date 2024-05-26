#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,k;
int a[30];
vector<string>v1;
vector<vector<string>> res;
void in() {
	vector<string>v;
	for(int i=1; i<=k; i++) {
		cout<<v1[a[i]]<<" ";
	}
	cout<<endl;
}
void Try(int i) {
	for(int j=a[i-1]+1; j<=n-k+i; j++) {
		a[i]=j;
		if(i==k) in();
		else Try(i+1);
	}
}
void test() {
	cin>>n>>k;
	set<string> se;
	for(int i=1; i<=n; i++) {
		string x;
		cin>>x;
		se.insert(x);
	}
	v1.push_back("");
	for(auto i:se) {
		v1.push_back(i);
	}
	n=se.size();
	Try(1);

}
int main() {
	test();
	return 0;
}
