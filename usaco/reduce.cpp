#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  int x[n], y[n];
  vector<pair<int, int>> v;
  for(int i = 0;i<n;i++){
    cin>>x[i]>>y[i];
    v.pb({x[i], i});
    v.pb({y[i], i});
  }

  sort(v.begin(), v.end());
  set<int> removed;
  int l = 0, r = sz(v) - 1;
  while(sz(removed) < 3){
    if(removed.find(v[l].second) && removed.find(v[r].second)){
      l++;
      r--;
    }
    else if(removed.find(v[l].second)){
      v.erase(v.begin() + r);
      r--;
    }
    else if(remoed.find(v[r].second)){
      v.erase(v.begin() + l);
      l++;
    }
    else if(v[l].first < v[r].first){
      v.erase(v.begin())
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