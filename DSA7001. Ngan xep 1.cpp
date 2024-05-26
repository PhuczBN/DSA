#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test(){
	int x;
	vector<int>v;
	string s;
	while(cin>>s){
		if(s=="push"){
			cin>>x;
			v.push_back(x);
		}
		else if(s=="pop"){
			if(!v.empty()){
				v.pop_back();
			}
		}
		else if(s=="show"){
			if(v.empty()){
				cout<<"empty";	
			}
			else for(auto i:v) cout<<i<<" ";
			cout<<endl;
		}
	}
}
int main(){
	test();
	return 0;
}
