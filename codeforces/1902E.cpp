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
  string s[n];
  int start[26] = {};
  int end[26] = {};
  int startl[26] = {};
  int el[26] = {};
  ll total = 0;
  for(int i = 0;i<n;i++){
    cin>>s[i];
    total += sz(s[i]);
    start[s[i][0]-'a']++;
    end[s[i].back()-'a']++;
    startl[s[i][0]-'a'] += sz(s[i]);
    el[s[i].back()-'a'] += sz(s[i]);
  }
  ll res = 0;
  for(int i = 0;i<n;i++){
    int ms = start[s[i].back()-'a'];
    int me = end[s[i][0] - 'a'];
    res += (n-ms)*(total-sz(s[i])) - ms * (sz(s[i]) + startl[s[i].back()-'a'] - 2);
    res += (n-me)*(total-sz(s[i])) - me * (sz(s[i]) + el[s[i][0]-'a'] - 2);
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