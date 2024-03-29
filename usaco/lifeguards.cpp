#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  int a, b;
  vector<pair<int, int>> v;
  for(int i = 0;i<n;i++){
    cin>>a>>b;
    v.pb({a, b});
  }

  int res = 0;
  for(auto it:v){
    bool arr[1001] = {};
    for(int i = 0;i<sz(v);i++){
      if(v[i] == it) continue;
      for(int j = v[i].first;j<v[i].second;j++){
        arr[j] = true;
      }
    }
    int cur = 0;
    for(int i = 0;i<=1000;i++){
      if(arr[i]) cur++;
    }
    res = max(res, cur);
  }
  cout<<res<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(0); cin.tie(0);
  freopen("lifeguards.in", "r", stdin);
  freopen("lifeguards.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}