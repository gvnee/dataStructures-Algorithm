#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  string s[n];
  for(int i = 0;i<n;i++) cin>>s[i];

  int r = 0, b = 0;
  int res = 0;
  for(;;){
    bool f = false;
    for(int i = n-1;i>=0;i--){
      for(int j = n-1;j>=0;j--){
        if(s[j][i]=='1'){
          f = true;
          b = j;
          r = i;
          break;
        }
      }
      if(f) break;
    }

    if(!f) break;

    for(int i = 0;i<=b;i++){
      for(int j = 0;j<=r;j++){
        if(s[i][j] == '1') s[i][j] = '0';
        else s[i][j] = '1';
      }
    }

    // for(int i = 0;i<n;i++)
    //   cout<<s[i]<<"\n";
    // cout<<"\n";
    res++;
  }

  cout<<res<<"\n";
  
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  freopen("cowtip.in", "r", stdin);
  freopen("cowtip.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}