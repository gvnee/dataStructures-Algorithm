#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
  int a,b,k;
  cin>>a>>b>>k;
  int boys[k] = {0}, girls[k] = {0};
  for(int i = 0;i<k;i++){
    cin>>a;
    boys[a]++;
  }
  for(int i = 0;i<k;i++){
    cin>>a;
    girls[a]++;
  }
  for(int i = 0;i<k;i++){
    res+=k-boys[i]-boys[]
  }
  cout<<res<<"\n";
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  int t;cin>>t;
  while(t--) solve();
  return 0;
}