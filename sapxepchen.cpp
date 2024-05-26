#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void sxep(vector<int>&a,int n) {
	int i,x,j;
	for(i=1; i<n; i++) {
		x=a[i];
		j=i-1;
		while(j>=0&&a[j]>x) {
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=x;
	}
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		vector<int> a;
		for(int i=0; i<n; i++) {
			int x;
			cin>>x;
			while(x) {
				int digit=x%10;
				if(find(a.begin(),a.end(),digit)==a.end()) {
					a.push_back(digit);
				}
				x/=10;
			}
		}
		sxep(a,a.size());
		for(auto it:a) {
			cout<<it<<" ";
		}
		cout<<endl;
	}

	return 0;
}
