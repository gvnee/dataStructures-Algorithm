#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int MxN = 200010;

ll tree[MxN];
int n;

ll sum(int i){
  ll s = 0LL;
  while(i >= 1){
    s += tree[i];
    i &= ~(i&-i);
  }
  return s;
}

void add(int i, ll v){
  while(i<=n){
    tree[i] += v;
    i += i & -i;
  }
}

int main(){
  freopen("input.in", "r", stdin);
  int q;
  cin>>n>>q;
  vector<ll> a(n+1);
  for(int i = 1;i<=n;i++){
    cin>>a[i];
    tree[i] = a[i];
  }
  //construct
  for(int i = 1;i<=n;i++){
    int parent = i + (i & -i);
    if(parent <= n) tree[parent] += tree[i];
  }

  while(q--){
    ll op, l, r;
    cin>>op>>l>>r;
    if(op == 1){
      add(l, r - a[l]);
      a[l] = r;
    }
    
    else cout<<sum(r) - sum(l-1)<<"\n";
  }
  return 0;
}