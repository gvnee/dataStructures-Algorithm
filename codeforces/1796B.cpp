// Asterisk-Minor Template
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
  string a, b;
  cin>>a>>b;
  if(a[0] == b[0]){
    cout<<"YES\n";
    cout<<a[0]<<"*\n";
    return;
  }
  if(a[a.length()-1] == b[b.length()-1]){
    cout<<"YES\n";
    cout<<'*'<<a[a.length()-1]<<"\n";
    return;
  }
  for(int i = 1;i<a.length();i++){
    for(int j = 1;j<b.length();j++){
      if(a[i] == b[j] && a[i-1] == b[j-1]){
        cout<<"YES\n";
        cout<<'*'<<a[i-1]<<a[i]<<"*\n";
        return;
      }
    }
  }
  cout<<"NO\n";
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  int t;
  cin>>t;
  while(t--) solve();
  return 0;
}