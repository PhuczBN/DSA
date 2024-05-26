#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define endl "\n"
void test(){
	int n;
	cin>>n;
	string s1;
	cin.ignore();
	getline(cin,s1);
	int m;
	cin>>m;
	string s2;
	cin.ignore();
	getline(cin,s2);
	if(s1==s2) cout<<1;
	else cout<<0;
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
