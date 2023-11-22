#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

const int guess = 20;

void f(){
  int n; cin>>n;
  vector<int> a(n);
  for(int i = 0;i<n;i++) cin>>a[i];
  vector<int> v[guess];
  v[0] = a;
  for(int i = 1;i<guess;i++){
    int fr[n+1] = {};
    for(int u:v[i-1]){
      fr[u]++;
    }
    for(int j = 0;j<n;j++){
      v[i].pb(fr[v[i-1][j]]);
    }
  }

  int q; cin>>q;
  while(q--){
    int x, k; cin>>x>>k; x--;
    if(k >= guess){
      cout<<v[guess-1][x]<<"\n";
    }
    else cout<<v[k][x]<<"\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}