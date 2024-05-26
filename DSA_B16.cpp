#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test(){
	int n,k,s;
	cin>>n>>k>>s;
	int a[n+1],b[n+1];
	b[0]=0;
	for(int i=1;i<n;i++){
		cin>>a[i];
		b[i]=b[i-1]+a[i];
	}
	int ok=0;
	for(int i=1;i<n;i++){
		int x=binary_search(b,i+1,n,b[i]+s);
		if(x!=-1&&x-i==k){
			cout<<"Yes"<<endl;
			ok=1;
			return;
		}
	}
	cout<<"No"<<endl;
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
