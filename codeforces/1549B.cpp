// B. Gregor and the Pawn Game
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
  int n;
  cin>>n;
  string a, b;
  cin>>a>>b;
  int res = 0;
  for(int i = 0;i<n;i++){
    if(b[i] == '0') continue;
    if(a[i] == '0') res++;
    else if(a[i-1] == '1'){
      a[i-1] = '0';
      res++;
    }
    else if(a[i+1] == '1'){
      a[i+1] = '0';
      res++;
    }
  }
  cout<<res<<"\n";
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