#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int mxn = 200010;
int n;
ll tree[mxn];

ll sum(int i){
  ll s = 0LL;
  while(i!=0){
    s += tree[i];
    i&=~(i&-i);
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
  ll arr[n+1];
  for(int i = 1;i<=n;i++){
    cin>>arr[i];
    tree[i] = arr[i];
  }

  for(int i = 1;i<=n;i++){
    int parent = i+(i&-i);
    if(parent<=n) tree[parent] += tree[i];
  }

  while(q--){
    ll q, l, r;
    cin>>q>>l>>r;
    if(q == 1){
      add(l, r - arr[l]);
      arr[l] = r;
    }
    else cout<<sum(r) - sum(l-1)<<"\n";
  }
  
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}