#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
// #define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

const int MxN = 4e5;

int l[MxN] = {};
int sz[MxN] = {};

int find(int x){
  int root = x;
  while(root != l[root]) root = l[root];

  while(x != root){
    int next = l[x];
    l[x] = root;
    x = next;
  }

  return root;
}

void unite(int a, int b){
  a = find(a);
  b = find(b);
  if(a == b) return;
  if(sz[a] < sz[b]) swap(a, b);
  sz[a] += sz[b];
  l[b] = a;
}

void f(){
  int n, q;
  cin>>n>>q;

  for(int i = 0;i<=n;i++){
    l[i] = i;
    sz[i] = 1;
  }
  
  int op, a, b;
  while(q--){
    cin>>op>>a>>b;
    if(op == 0) unite(a, b);
    else{
      if(find(a) == find(b)) cout<<"1\n";
      else cout<<"0\n";
    }
  }
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}