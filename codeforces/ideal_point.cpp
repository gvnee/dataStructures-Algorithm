#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n, k;
  cin>>n>>k;
  int l, r;
  bool left = false, right = false, both = false;
  for(int i = 0;i<n;i++){
    cin>>l>>r;
    if(l == k && r == k) both = true;
    else if(l == k) left = true;
    else if(r == k) right = true;
  }
  if(left && right || both) cout<<"YES\n";
  else cout<<"NO\n";
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  // freopen("input.txt", "r", stdin);

  int t;
  cin>>t;
  while(t--) solve();

}