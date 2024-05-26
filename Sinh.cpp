#include<bits/stdc++.h>
using namespace std;
using ll=long long;
bool OK=true;
int X[100],n,k,A[100];
void Init() {
	cin>>n>>k;
	for(int i=1; i<=n; i++) {
		X[i]=0;
		cin>>A[i];
	}
}
void Result() {
	for(int i=1; i<=n; i++) {
		if(X[i]) {
			cout<<A[i]<<" ";
		}
	}
	cout<<"\n";
}
void  Next_Bits_String() {
	int i=n;
	while(i>0&&X[i]==1) {
		X[i]=0;
		i--;
	}
	if(i>0&&X[i]==0) {
		X[i]=1;
	} else {
		OK=false;
	}
}
bool check() {
	int sum=0;
	for(int i=1; i<=n; i++) {
		if(X[i]) {
			sum+=A[i];
		}
	}
	if(sum==k) return true;
	else return false;
}
int main() {
	Init();
	int cnt=0;
	while(OK) {
		if(check()) {
			Result();
			cnt++;
		}
		Next_Bits_String();
	}
	cout<<cnt<<endl;
	return 0;
}
