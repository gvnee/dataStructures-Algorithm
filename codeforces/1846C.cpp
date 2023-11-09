#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

const int mxn = 1e6;

void f(){
  int n;
  cin>>n;
  for(int v = 2;v<=mxn;v++){
    ll cur = v+1;
    for(int l = 2;l<=mxn;l++){
      cur += pow(v, l);
      if(cur == n){
        cout<<"YES\n";
        return;
      }
      else if(cur > mxn){
        break;
      }
    }
  }
  cout<<"NO\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}