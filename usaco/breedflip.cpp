#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  string a, b;
  cin>>a>>b;
  int res = 0;
  bool f = false;
  for(int i = 0;i<n;i++){
    if(a[i] != b[i]){
      if(!f){
        res++;
        f = true;
      }
    }
    else f = false;
  }
  cout<<res<<'\n';
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  freopen("breedflip.in", "r", stdin);
  freopen("breedflip.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}