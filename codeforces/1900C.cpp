#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back
#define F first
#define S second

const int mxn = 3e5;
vector<pair<int, int>> a(mxn);
int res = INT_MAX;
int dst[mxn];
string s;

void dfs(int c){
  int l = a[c].F, r = a[c].S;
  if(l == -1 && r == -1){
    res = min(res, dst[c]);
  }
  
  if(l != -1){
    if(s[c] != 'L'){
      dst[l] = min(dst[l], dst[c]+1);
    }
    else dst[l] = min(dst[l], dst[c]);
    dfs(l);
  }
  if(r != -1){
    if(s[c] != 'R'){
      dst[r] = min(dst[r], dst[c]+1);
    }
    else dst[r] = min(dst[r], dst[c]);
    dfs(r);
  }
}

void f(){
  res = INT_MAX;
  int n;
  cin>>n;
  for(int i = 0;i<n;i++) dst[i] = INT_MAX;
  cin>>s;
  for(int i = 0;i<n;i++){
    int l, r;
    cin>>l>>r;
    l--, r--;
    a[i] = {l, r};
  }

  dst[0] = 0;
  dfs(0);
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}