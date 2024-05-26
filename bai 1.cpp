#include<bits/stdc++.h>

#define ll long long
using namespace std;

void Solve(int n){
    queue<string> q;
    vector<string> v;
    q.push("6"); 
    q.push("8");
    v.push_back("6");
    v.push_back("8");
    while(q.front().length() < n){
        string s = q.front(); q.pop();
        q.push(s + "6");
        q.push(s + "8");
        v.push_back(s + "6");
        v.push_back(s + "8");
    }
    cout << v.size() << endl;
    for(auto x : v) cout << x << " ";
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        int n; cin >> n;
        Solve(n);
    }
}
