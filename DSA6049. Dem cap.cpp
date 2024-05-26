#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define endl "\n"
void test() {
	int n, k;
    cin >> n >> k;
    int a[100000];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += lower_bound(a + i + 1, a + n, a[i] + k) - (a + i + 1);
    }
    cout << ans;
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
