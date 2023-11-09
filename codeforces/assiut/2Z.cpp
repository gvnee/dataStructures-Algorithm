#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int k, s;
  cin>>k>>s;
  ll res = 0;
  for(int x = 0;x<=k;x++){
    for(int y = 0;y<=k;y++){
        if(s-x-y >= 0 && s-x-y <= k){
          // cout<<x<<" "<<y<<" "<<s-x-y<<"\n";
          res++;
        }
    }
  }
  cout<<res;
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}