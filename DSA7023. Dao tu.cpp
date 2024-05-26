#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test(){
	string s;
	getline(cin,s);
	stack<string>st;
	string word;
	stringstream ss(s);
	while(ss>>word){
		st.push(word);
	}
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		test();
		cout<<endl;
	}
	return 0;
}
