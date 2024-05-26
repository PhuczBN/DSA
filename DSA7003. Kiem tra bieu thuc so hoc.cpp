#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define endl "\n"
void test(){
	string s;
	getline(cin,s);
	stack<char>st;
	int check=1;
	for(int i=0;i<s.size();i++){
		if(s[i]!=')') st.push(s[i]);
		else{
			bool ok=0;
			while(!st.empty()){
				char c=st.top();
				st.pop();
				if(c=='+'||c=='-'||c=='*'||c=='/') ok=1;
				if(c=='(') return;
 			}
 			if(ok==0){
 				check=0;
 				return;
			 }
		}
	}
	if(check==0) cout<<"Yes";
	else cout<<"No";
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
