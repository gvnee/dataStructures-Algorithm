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
  int n; cin>>n;
  vector<pi> a;
  for(int i = 0;i<n;i++){
    int t, x; cin>>t>>x;
    t--, x--;
    a.pb({t, x});
  }

  int need[n] = {};
  
  vector<int> res;
  reverse(all(a));
  int hold = 0;
  int M = 0;
  for(auto [t, x]:a){
    if(t){
      // monster
      need[x]++;
      hold++;
      M = max(M, hold);
    }
    else{
      // potion
      if(need[x]){
        need[x]--;
        res.pb(1);
        hold--;
      }
      else res.pb(0);
    }
  }

  for(int i = 0;i<n;i++){
    if(need[i]){
      cout<<"-1\n";
      return;
    }
  }
  reverse(all(res));
  cout<<M<<"\n";
  for(int x:res){
    cout<<x<<" ";
  }
  cout<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}