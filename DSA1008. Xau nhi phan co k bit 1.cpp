#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,k,a[1000];
bool OK=true;
void Init() {

	for(int i=1; i<=n; i++) {
		a[i]=0;
	}
}
void Result() {
	for(int i=1; i<=n; i++) {
		cout<<a[i];
	}
	cout<<endl;
}
void Next_Bits_String() {
	int i=n;
	while(i>0&&a[i]==1) {
		a[i]=0;
		i--;
	}
	if(i>0&&a[i]==0) {
		a[i]=1;
	} else {
		OK=false;
	}
}
bool check() {
	int dem=0;
	for(int i=1; i<=n; i++) {
		if(a[i]==1) dem++;
	}
	if(dem!=k) return false;
	else return true;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		cin>>n>>k;
		Init();
		while(OK) {
			if(check()) {
				Result();
			}
			Next_Bits_String();
		}
		OK=true;
		memset(a, 0, sizeof(a));
	}

}
