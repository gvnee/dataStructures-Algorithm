#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

int sum(string s){
  int sum = 0;
  for(char c:s) sum += c - '0';
  return sum;
}

void f(){
  int n;
  cin>>n;
  string a[n];
  int c[6][100] = {};
  for(int i = 0;i<n;i++){
    cin>>a[i];
    c[sz(a[i])][sum(a[i])]++;
  }
  ll res = 0;
  for(int i = 0;i<n;i++){
    for(int l = 1;l<=5;l++){
      string cur = a[i];

      int t = sz(cur) + l;
      if(t % 2) continue;
      if(sz(cur) >= l){
        int half = sum(cur.substr(0, t/2));
        int a = sum(cur) - half;
        int need = half - a;
        res+=c[l][need];
        
        if(sz(cur) == l) continue;
        half = sum(cur.substr(sz(cur) - t/2, t/2));
        a = sum(cur) - half;
        need = half - a;
        res += c[l][need];
      }
    }
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