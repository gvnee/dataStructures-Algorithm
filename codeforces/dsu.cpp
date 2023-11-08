#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

const int mxn = 1000;
int dsu[mxn];
int s[mxn];

int find(int a){
  int root = a;
  while(root != dsu[root]) root = dsu[root];

  while(a != root){
    int next = dsu[a];
    dsu[a] = root;
    a = next;
  }
  
  return root;
}

void merge(int a, int b){  
  a = find(a);
  b = find(b);
  if(a == b) return;
  if(s[a] < s[b]) swap(a, b);
  s[a] += s[b];
  dsu[b] = a;
}

void f(){
  int n, q;
  cin>>n>>q;
  
  for(int i = 0;i<=n;i++){
    dsu[i] = i;
    s[i] = 1;
  }

  int op, a, b;
  while(q--){
    cin>>op>>a>>b;
    if(op == 0) merge(a, b);
    else{
      if(find(a) == find(b)) cout<<"1\n";
      else cout<<"0\n";
    }
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}