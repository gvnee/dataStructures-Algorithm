#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

const int mxn = 2e5+5;
vector<int> a[mxn];
int s[mxn] = {};

int sub(int i){
  if(a[i].empty()) return 0;
  int t = 0;
  for(int u:a[i]){
    t += sub(u)+1;
  }
  s[i] = t;
  return t;
}

void f(){
  int n;
  cin>>n;
  int t;
  for(int i = 2;i<=n;i++){
    cin>>t;
    a[t].pb(i);
  }
  sub(1);

  for(int i = 1;i<=n;i++){
    cout<<s[i]<<" ";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}