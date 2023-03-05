#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
  int n,t;
  cin>>n>>t;
  char a;
  map<char, int> M;
  for(int i = 0;i<n;i++){
    cin>>a;
    if(M.count(a)<1)
      M[a] = 1;
    else M[a]++;
  }

  int pairs = 0;

  for(auto& i:M){
    if(i.first < 91){
      char lower = i.first + 32;
      if(M.count(lower)<1) continue;
      if(i.second > M[lower]){
        pairs += M[lower];
        i.second -= M[lower];
        M[lower] = 0;
      } 
      else{
        pairs += i.second;
        M[lower] -= i.second;
        i.second = 0;
      }
    }
  }
  for(auto& i:M){
    if(i.second>1){
      int trans = i.second/2;
      if(t - trans >= 0){
        pairs += trans;
        t -= trans;
      }
      else{
        pairs += t;
        t = 0;
        break;
      }
    }
  }
  cout<<pairs<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif

  int t;
  cin>>t;
  while(t--) solve();
  
  return 0;
}