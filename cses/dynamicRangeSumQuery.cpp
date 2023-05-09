#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

const int MxN = 2e5+1;
int n;
ll tree[MxN];

ll sum(int i){
  ll s = 0LL;
  while(i!=0){ 
    s += tree[i];
    i &= ~(i&-i);
  }
  return s;
}

void add(int i, int v){
  while(i<=n){
    tree[i] += v;
    i += i&-i;
  }
}

void f(){
  int q;
  cin>>n>>q;
  ll a[n+1];
  for(int i=1;i<=n;i++){
    cin>>a[i];
    tree[i] = a[i];
  }

  for(int i = 1;i<=n;i++){
    int parent = i+(i&-i);
    if(parent<=n) tree[parent] += tree[i];
  }

  int op, l, r, i, v;
  while(q--){
    cin>>op;
    if(op == 1){
      cin>>i>>v;
      add(i, v - a[i]);
      a[i] = v;
    }
    else{
      cin>>l>>r;
      cout<<sum(r) - sum(l-1)<<"\n";
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