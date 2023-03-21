#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n;
  cin>>n;
  vector<int> children[n];
  int c[n+1];
  for(int i = 0;i<n;i++){
    cin>>temp>>c[i];
    if(temp != -1){
      temp--;
      children[temp].push_back(i);
    }
  }
  vector<int> ans;
  for(int i = 0;i<n;i++){
    if(c[i] == 1){
      bool pos = 1;
      for(auto x:children[i]){
        if(c[x] == 0){
          pos = 0;
          break;
        }
      }
      if(pos) ans.push_back(i+1);
    }
  }
  if(ans.size() > 0)
  for(auto x: ans) cout<<x<<' ';
  else cout<<"-1\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
  #endif

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}