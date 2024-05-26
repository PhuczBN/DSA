#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test(){
	int n;
	cin>>n;
	stack<string>st;
	queue<string>q;
	q.push("");
	while(!q.empty()){
		string s=q.front();
		q.pop();
		st.push(s);
		if(s.length()==n) continue;
		q.push(s+"6");
		q.push(s+"8");
		
	}
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
	return 0;
}
