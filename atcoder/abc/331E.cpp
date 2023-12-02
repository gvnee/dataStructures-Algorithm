#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  int n, m, l; cin>>n>>m>>l;
  vector<pi> a(n), b(m);
  for(int i = 0;i<n;i++){
    int t; cin>>t;
    a[i] = {t, i};
  }
  for(int i = 0;i<m;i++){
    int t; cin>>t;
    b[i] = {t, i};
  }

  sort(all(a)); sort(all(b));

  vector<pi> x(n), y(m);
  for(int i = 0;i<n;i++){
    x[i] = {a[i].S, i};
  }
  for(int i = 0;i<m;i++){
    y[i] = {b[i].S, i};
  }
  sort(all(x)); sort(all(y));

  vector<priority_queue<int>> adj(n);
  for(int i = 0;i<l;i++){
    int no1, no2; cin>>no1>>no2; no1--, no2--;
    no1 = x[no1].S;
    no2 = y[no2].S;
    adj[no1].push(no2);
  }
  ll res = 0;
  for(int i = n-1;i>=0;i--){
    int mx = m-1;
    while(!adj[i].empty()){
      if(adj[i].top() == mx){
        adj[i].pop();
        mx--;
      }
      else{
        res = max(res, (long long) a[i].F + b[mx].F);
        break;
      }
    }
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