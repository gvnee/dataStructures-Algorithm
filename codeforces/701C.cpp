#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  int n;
  string s;
  cin>>n>>s;

  unordered_map<char, int> m;

  auto valid = [&]() -> bool {
    for(auto [key, val] : m) if(!val) return false;
    return true;
  };

  int res = INT_MAX;

  for(char c:s) m[c] = 0;

  int l = 0, r = 0;
  m[s[0]]++;
  while(l<n){
    if(valid() || r>=n){
      if(valid()) res = min(res, r-l+1);
      m[s[l++]]--;
    }
    else m[s[++r]]++;
  }

  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}