#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void test(){
	int n;
	cin>>n;
	int c4=0,c7=0;
	c7=n/7;
	while(c7>=0){
		if((n-c7*7)%4==0){
			c4=(n-c7*7)/4;
			break;
		}
		c7--;
	}
	if(c7<0) cout<<"-1";
	else {
		while(c4--) cout<<4;
		while(c7--) cout<<7;
	}
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
