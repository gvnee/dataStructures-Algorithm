#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

const int MXN = 2e5;

int dsu[MXN];
int si[MXN];

int find(int a){
  int root = a;
  while(root != dsu[root]){
    root = dsu[root];
  }

  while(a != dsu[root]){
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
  if(si[a]<si[b]) swap(a, b);
  dsu[b] = a;
  si[a] += si[b];
}

void f(){
  int n, q; cin>>n>>q;

  for(int i = 0;i<n;i++){
    dsu[i] = i;
    si[i] = 1;
  }
  
  while(q--){
    int op, a, b;
    cin>>op>>a>>b;
    if(op){
      cout<<(find(a) == find(b))<<"\n";
    }
    else{
      merge(a, b);
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