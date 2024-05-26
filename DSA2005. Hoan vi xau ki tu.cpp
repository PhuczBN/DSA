#include<bits/stdc++.h>
using namespace std;
using ll=long long;
string a,b;
vector<bool> u;
int n;
void Try(int i){
	for(int j=0;j<n;j++){
		if(!u[j]){
			b[i]=a[j];
			u[j]=true;
			if(i==n-1) cout<<b<<" ";
			else Try(i+1);	
			u[j]=false;
		}
	}
}
void test(){
	cin>>a;
	n=a.size();
	b.resize(n);
	u.resize(n,false);
	sort(a.begin(),a.end());
	Try(0);
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
