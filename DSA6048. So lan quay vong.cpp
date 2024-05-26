#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define endl"\n"
void test(){
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(a,a+n);
	cout<<a[n-1]-b[n-1];
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
