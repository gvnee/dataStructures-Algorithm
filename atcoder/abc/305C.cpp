#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back
#define F first
#define S second

void f(){
  int n, m; cin>>n>>m;
  string s[n];
  for(int i = 0;i<n;i++){
    cin>>s[i];
  }
  int t = INT_MAX, r = INT_MIN, b = INT_MIN, l = INT_MAX;
  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
      if(s[i][j] == '#'){
        t = min(t, i);
        r = max(r, j);
        b = max(b, i);
        l = min(l, j);
      }
    }
  }

  for(int i = 0;i<n;i++){
    for(int j = 0;j<m;j++){
      if(s[i][j] == '.'){
        if(i>=t && i<=b && j>=l && j<=r) {cout<<i+1<<" "<<j+1<<"\n"; return;}
      }
    }
  }
  
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}