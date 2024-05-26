#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
int a[]={1,2,5,10,20,50,100,200,500,1000};
void Init(){
	cin>>n;
}
void Greedy(){
	int tong=0;
	for(int i=10-1;i>=0;i--){
		tong+=n/a[i];
		n%=a[i];
		if(n==0) break;
	}
	cout<<tong;
}
int main(){
	Init();
	Greedy();
	return 0;
}
