#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

const int mxn = 1e5+1;
int l[mxn], s[mxn];
int comp, mx = 1;

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
  if(s[a] < s[b]) swap(a, b);
  s[a] += s[b];
  l[b] = a;
  
  mx = max(mx, s[a]);
  comp--;
}

void f(){
  int n, m;
  cin>>n>>m;
  comp = n;
  for(int i = 1;i<=n;i++){
    l[i] = i;
    s[i] = 1;
  }
  int a, b;
  while(m--){
    cin>>a>>b;
    unite(a, b);
    cout<<comp<<' '<<mx<<"\n";
  }
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}