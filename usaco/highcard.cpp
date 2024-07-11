#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define pb push_back
#define int long long
#define pl pair<int,int>
#define sz(x) (int)(x).size()
#define all(x) x.begin(), x.end()

void f(){
  int n; cin>>n;
  vector<int> b;
  set<int> a;
  bool op[n*2+1] = {};
  for(int i = 0;i<n;i++){
    int x; cin>>x;
    b.pb(x);
    op[x] = true;
  }
  for(int i = 1;i<=n*2;i++){
    if(!op[i]) a.insert(i);
  }
  int res = 0;
  for(int x:b){
    auto it = a.upper_bound(x);
    if(it == a.end()){
      a.erase(a.begin());
    }
    else{
      res++;
      a.erase(it);
    }
  }
  cout<<res<<"\n";
}

signed main(){
  cin.tie(0); ios::sync_with_stdio(0);
  freopen("highcard.in", "r", stdin);
  freopen("highcard.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}