#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int temp;

void solve(){
  ll n;
  cin>>n;
  cout<<n<<" ";
  while(n>1){
    if(n%2==0) n /= 2;
    else n = n*3 + 1;
    cout<<n<<" ";
  }
  cout<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif

  int t = 1;
  // cin>>t;
  while(t--) solve();
  
  return 0;
}