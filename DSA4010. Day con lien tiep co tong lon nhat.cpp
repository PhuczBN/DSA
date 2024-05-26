#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,a[1000];
void Init() {
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}

}
int MaxCrossingSum(int l,int m,int r) {
	int sum=0,left_sum=INT_MIN,right_sum=INT_MIN;;
	for(int i=m; i>=l; i--) {
		sum+=a[i];
		if(sum>left_sum) left_sum=sum;
	}
	sum=0;
	for(int i=m+1; i<=r; i++) {
		sum+=a[i];
		if(sum>right_sum) right_sum=sum;
	}
	return left_sum+right_sum;
}
int  MaxSubArray(int l,int r) {
	if (l==r) return a[l];
	int m=(l+r)/2;
	int maxLeft=MaxSubArray(l,m);
	int maxRight=MaxSubArray(m+1,r);
	int maxLeftRight=MaxCrossingSum(l,m,r);
	int maxValue=max(max(maxLeft,maxRight),maxLeftRight);
	return maxValue;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		Init();
		cout<<MaxSubArray(0, n-1);
		cout<<endl;
	}

	return 0;
}
