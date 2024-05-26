#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define endl "\n"
struct node {
	int data;
	node *Left;
	node *Right;
	node(int x) {
		data=x;
		Left=Right=NULL;
	}
};
typedef node *NODE;

void Insert(NODE &root, int x) {
	if(root==NULL) {
		root=new node(x);
	}
	if(x<root->data) {
		Insert(root->Left,x);
	} else if(x>root->data) {
		Insert(root->Right,x);
	}
}
void Duyet_NLR(NODE root) {
	if(root!=NULL) {
		cout<<root->data<<" ";
		Duyet_NLR(root->Left);
		Duyet_NLR(root->Right);

	}
}
void test() {
	int n;
	cin>>n;
	NODE root=NULL;
	for(int i=0; i<n; i++) {
		int x;
		cin>>x;
		Insert(root,x);
	}
	Duyet_NLR(root);
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
