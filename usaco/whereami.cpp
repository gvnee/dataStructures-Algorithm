#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

// ABCDABC
// A B C D A B C
// AB BC CD AB BC
// ABC BCD

void f(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  for(int i = 1;i<=n;i++){
    unordered_set<string> st;
    for(int j = 0;j<=n-i;j++){
      st.insert(s.substr(j, i));
    }
    if(sz(st) == n-i+1){
      cout<<i<<"\n";
      return;
    }
  }
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  freopen("whereami.in", "r", stdin);
  freopen("whereami.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}