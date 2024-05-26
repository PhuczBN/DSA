#include<bits/stdc++.h>
using namespace std;

int V, E, u;
vector<int> ke[1001];
bool visited[1001];
int parent[1001];
void Init(){
    memset(visited, 0, sizeof(visited));
    memset(ke, 0, sizeof(ke));
    memset(parent, 0, sizeof(parent));
    cin >> V >> E >> u;
    for(int i=1; i<=E; i++){
        int a, b;
        cin >> a >> b;
        ke[a].push_back(b);
        ke[b].push_back(a);
    }
}
void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int s = q.front(); q.pop();
        for(int v : ke[s]){
            if(!visited[v]){
                q.push(v);
                visited[v] = true;
                parent[v] = s;
            }
        }
    }
}
void Path(int u){
    for(int i=1; i<=V; i++){
        if(parent[i] == 0 && i != u)
            cout << "No path\n";
        else if(i != u){
            stack<int> st;
            int j = i;
            st.push(j);
            while(j != u){
                st.push(parent[j]);
                j = parent[j];
            }
            while(!st.empty()){
                cout << st.top() << " ";
                st.pop();
            }
            cout << endl;
        }
    }
}
int main(){
    int t ; cin >> t;
    while(t--){
        Init();
        BFS(u);
        Path(u);
    }
}