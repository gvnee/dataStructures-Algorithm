// Fair division
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int temp;

void solve(){
  int n;
  cin>>n;
  int freq[3] = {0};
  for(int i = 0;i<n;i++){
    cin>>temp;
    freq[temp]++;
  }
  if(freq[1] % 2 != 0){
    cout<<"NO\n";
    return;
  }
  if((freq[1] + freq[2] * 2) % 2 != 0){
    cout<<"NO\n";
    return;
  }
  cout<<"YES\n";
}

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif

  int t = 1;
  cin>>t;
  while(t--) solve();
  
  return 0;
}