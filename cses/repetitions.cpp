#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int temp;

void solve(){
  string str;
  cin>>str;
  int longest = 0;
  char cur = str[0];
  int c = 1;
  for(int i = 1;i<str.size();i++){
    if(str[i] != cur){
      cur = str[i];
      longest =  max(c, longest);
      c = 1;
    }
    else c++;
  }
  longest = max(c, longest);
  cout<<longest<<"\n";
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