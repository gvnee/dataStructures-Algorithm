#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

// MIFL FLMI

void f(){
  int n;
  cin>>n;
  unordered_map<string, int> m;
  string city, state;
  int res = 0;
  for(int i = 0;i<n;i++){
    cin>>city>>state;
    city = city.substr(0, 2);
    if(m.count(state + city)) res+=m[state+city];
    if(city != state) m[city+state]++;
  }
  cout<<res<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  freopen("citystate.in", "r", stdin);
  freopen("citystate.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}