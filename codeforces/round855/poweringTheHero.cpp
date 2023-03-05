#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
  int n;
  cin>>n;
  ll cards[n];
  for(int i = 0;i<n;i++){
    cin>>cards[i];
  }
  int zeros = 0;
  ll power = 0;
  for(int i = n-1;i>=0;i--){
    vector<ll> v;
    for(auto it:v) cout<<it<<" ";
    cout<<"\n";
    if(cards[i] == 0){
      if(v.size() == 0) continue;
      if(v.size() <= zeros){
        for(auto it:v) power += it;
        zeros -= v.size();
      }
      else{
        sort(v.begin(), v.end(), greater<ll>());
        for(int j = 0;j<zeros;j++){
          power += v[j];
        }
        zeros = 0;
      }
      zeros++;
      v.clear();
    }
    else{
      cout<<"asdf";
      v.push_back(cards[i]);
    }
    if(i == 0){
      if(v.size() <= zeros){
        for(auto it:v) power += it;
        zeros -= v.size();
      }
      else{
        sort(v.begin(), v.end(), greater<ll>());
        for(int j = 0;j<zeros;j++){
          power += v.at(j);
        }
        zeros = 0;
      }
    }
  }
  
  cout<<power<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}