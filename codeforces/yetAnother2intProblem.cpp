#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  int t;
  cin>>t;
  while(t--){
    ll a, b;
    cin>>a>>b;
    ll dif = abs(a-b);
    if(dif%10==0) cout<<dif/10<<"\n";
    else cout<<dif/10 + 1<<"\n";
  }
  return 0;
}