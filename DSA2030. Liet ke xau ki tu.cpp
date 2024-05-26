#include<bits/stdc++.h>
using namespace std;
using ll=long long;
char c;
int k;
string s;
void Try(char i){
	for(char j=i;j<=c;j++){
		s.push_back(j);
		if(s.length()==k) cout<<s<<endl;
		else Try(j);
		s.pop_back();
	}
}
void test(){
	cin>>c>>k;
	Try('A');
}
int main(){
	test();
	return 0;
}
