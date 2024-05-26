#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int check(int a[],int b[],int n){
	for(int i=0;i<n;i++){
		if(a[i]+a[n-i-1]!=b[i]+b[n-i-1]) return 0 ;
	}
	return 1;
}
void test(){
	 int n;
	 cin>>n;
	 int a[100],b[100];
	 for(int i=0;i<n;i++){
	 	cin>>a[i];
	 	b[i]=a[i];
	 }
	 sort(b,b+n);
	 if(check(a,b,n)) cout<<"Yes";
	 else cout<<"No";
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
