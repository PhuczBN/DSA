#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test(){
	int n,x;
	cin>>n;
	string s;
	stack<int> st;
	while(n--){
		cin>>s;
		if(s=="PUSH"){
			cin>>x;
			st.push(x);
		}
		if(s=="POP"){
			if(!st.empty()){
				st.pop();
			}
		}
		if(s=="PRINT"){
			if(st.empty()){
				cout<<"NONE";
			}
			else cout<<st.top();
			cout<<endl;
		}
	}
}
int main(){
	test();
	return 0;
}
