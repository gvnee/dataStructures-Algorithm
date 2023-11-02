#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

const int mxn = 100005;
ll p[mxn] = {};

void f(){
  string s;
  cin>>s;

  for(int i = 1;i<=sz(s);i++){
    if(s[i-1] == s[i]){
      p[i] = 1;
    }
    p[i] += p[i-1];
    // cout<<p[i]<<"\n";
  }
  
  int n;
  cin>>n;
  int l, r;
  while(n--){
    cin>>l>>r;
    cout<<p[r-1] - p[l-1]<<"\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}