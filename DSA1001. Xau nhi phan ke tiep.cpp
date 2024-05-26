#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test() {
	string s;
	cin>>s;
	for(int i=s.length()-1; i>=0; i--) {
		if(s[i]=='1') s[i]='0';
		else {
			s[i]='1';
			break;
		}
	}
	cout<<s<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		test();
	}
	return 0;
}
