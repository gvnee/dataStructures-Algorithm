#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  ll n, m;
  cin>>n>>m;
  
  int a[n];
  vector<int> val[m];
  for(int i = 0;i<n;i++){
    cin>>a[i];
    val[a[i]%m].pb(i);
  }

  // for(int i = 0;i<m;i++){
  //   cout<<i<<": ";
  //   for(int x:val[i]) cout<<x<<" ";
  //   cout<<"\n";
  // }

  ll moves = 0;
  vector<pair<int, int>> free;
  for(int i = 0;i< 2*m;i++){
    int cur = i % m;
    while(sz(val[cur]) > n/m){
      int elem = val[cur].back();
      val[cur].pop_back();
      free.pb({elem, i});
    }

    while(sz(val[cur]) < n/m && !free.empty()){
      int elem = free.back().first;
      int mmod = free.back().second;
      free.pop_back();
      val[cur].pb(elem);
      a[elem] += i - mmod;
      moves += i - mmod;
    }
    
  }

  cout<<moves<<"\n";
  for(int i = 0;i<n;i++) cout<<a[i]<<" ";
  cout<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}