#include<bits/stdc++.h>
using namespace std;
using ll=long long;
char n;
string s;
int u[127]= {0};
bool check(char n) {
	return (n!='A'&&n!='E');
}
void solve() {
	for(int i=0; i<s.length(); i++) {
		if(s[i]=='A'||s[i]=='E') {
			if(i>0&&i<s.length()-1&&check(s[i-1])&&check(s[i+1]))
				return;
		}
	}
	cout<<s<<endl;
}
void Try(char i) {
	for(char j='A'; j<=n; j++) {
		if(!u[j]) {
			s.push_back(j);
			u[j]=1;
			if(s.size()== n-'A'+1) solve();
			else Try(i+1);
			u[j]=0;
			s.pop_back();
		}
	}
}
void test() {
	cin>>n;
	Try('A');
}
int main() {
	test();
	return 0;
}
