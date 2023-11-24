#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back
#define S second

void f(){
  int n; cin>>n;
  vector<pair<int, int>> a;
  int t;
  int mx = INT_MIN, mxi = 0;
  for(int i = 0;i<n;i++){
    cin>>t;
    a.pb({t, i});
    if(t >= mx){
      mx = t;
      mxi = i;
    }
  }
  
  bool visited[n] = {};
  priority_queue<pair<int, int>> q;
  q.push({-mx, mxi});
  ll res = mx;
  ll cur = mx;
  while(!q.empty()){
    auto c = q.top(); q.pop();
    visited[c.S] = true;
    if(c.S-1>=0 &&!visited[c.S-1]) q.push({-a[c.S-1].first, a[c.S-1].S});
    if(c.S+1<n && !visited[c.S+1]) q.push({-a[c.S+1].first, a[c.S+1].S});
    int A = -c.first;
    // cout<<A<<" ";
    if(A > cur){
      res += A - cur;
      cur = A;
    }
    cur--;
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}