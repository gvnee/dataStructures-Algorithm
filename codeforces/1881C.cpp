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
  for(int i = 0;i<n;i++){
     cin>>s[i];
  }

  ll res = 0;

  for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){

      char mx = 'a';
      pi cur = {i, j};
      for(int k = 0;k<4;k++){
        mx = max(mx, s[cur.F][cur.S]);
        pi prev = {n-cur.S-1, cur.F};
        cur = prev;
      }

      cur = {i, j};
      for(int k = 0;k<4;k++){
        res += mx - s[cur.F][cur.S];
        s[cur.F][cur.S] = mx;
        pi prev = {n-cur.S-1, cur.F};
        cur = prev;
      }

    }
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}