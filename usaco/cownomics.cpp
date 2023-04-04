#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n, m;
  cin>>n>>m;
  string s[n], p[n];
  for(int i = 0;i<n;i++){
    cin>>s[i];
  }
  for(int i = 0;i<n;i++){
    cin>>p[i];
  }
  int res = 0;
  for(int i = 0;i<m;i++){
    int sp[26] = {}, pl[26] = {};
    for(int j = 0;j<n;j++){
      sp[s[j][i] - 'A'] = 1;
    }
    for(int j = 0;j<n;j++){
      pl[p[j][i] - 'A'] = 1;
    }
    bool flag = true;
    for(int i = 0;i<26;i++){
      if(sp[i]&pl[i]){
        flag = false;
      }
      sp[i] = 0;
      pl[i] = 0;
    }
    res += flag;
  }
  cout<<res<<"\n";
  
}

int main(){
  
  ios_base::sync_with_stdio(0); cin.tie(0);
  freopen("cownomics.in", "r", stdin);
  freopen("cownomics.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}