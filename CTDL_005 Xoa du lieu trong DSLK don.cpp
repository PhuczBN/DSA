#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int x;
	cin>>x;
	
	for(int i=0;i<n;i++){
		if(a[i]!=x) cout<<a[i]<<" ";
	}
}
int main(){
	test();
	cout<<endl;
	return 0;
}
