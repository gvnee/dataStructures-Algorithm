#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  int a, b;
  int deg[n+1] = {};
  for(int i = 0;i<n-1;i++){
    cin>>a>>b;
    deg[a]++;
    deg[b]++;
  }

  int res = 0;
  for(int i = 1;i<=n;i++){
    res = max(res, deg[i]);
  }
  cout<<res+1<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  freopen("planting.in", "r", stdin);
  freopen("planting.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}