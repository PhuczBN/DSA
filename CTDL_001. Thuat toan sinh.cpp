#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,a[1000];
bool OK=true;
void Init(){
	cin>>n;
	for(int i=1;i<n;i++){
		a[i]=0;
	}
}
void Result(){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void Next_Bits_String(){
	int i=n;
	while(i>0&&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i>0&&a[i]==0){
		a[i]=1;
	}
	else OK=false;
}
bool check(){
	for(int i=1;i<=n;i++){
		if(a[i]!=a[n-i+1])
		return false;
	}
	return true;
}
int main() {
	Init();
	int cnt=0;
	while(OK) {
		if(check()) {
			Result();
		}
		Next_Bits_String();
	}
	return 0;
}
