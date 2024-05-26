#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define endl "\n"
void test() {
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int &i:a) {
		cin>>i;
	}
	multiset<int> se;
	for(int i=0; i<k; i++) {
		se.insert(a[i]);
	}
	cout<<*se.rbegin()<<" ";

	for(int i=k; i<n; i++) {
		auto it=se.find(a[i-k]);
		se.erase(it);
		se.insert(a[i]);
		cout<<*se.rbegin()<<" ";
	}
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
