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
  int n; cin>>n;
  string s; cin>>s;
  vector<pi> p(26, {0, 0});
  int cur[26] = {};
  int six[26] = {};

  for(int i = 0;i<26;i++) p[i].S = i;

  for(int i = 0;i<sz(s);i++){
    int c = s[i] - 'A';
    if(cur[c] <= 4){
      p[c].F += i;
      cur[c]++;
    }
    else if(cur[c] == 5){
      six[c] = i+1;
      cur[c]++;
    }
  }
  sort(all(p), [&](pi a, pi b){
    if(a.F != b.F) return a.F < b.F;
    if(!six[a.S] && !six[b.S]) return a.S < b.S;
    if(!six[a.S] || !six[b.S]) return six[a.S] > six[b.S];
    return six[a.S] < six[b.S];
  });

  string res = "";
  for(auto [point, team]:p){
    if(cur[team] >= 5) res += team + 'A';
    // cout<<char('A' + team)<<": "<<point<<" "<<cur[team]<<"\n";
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