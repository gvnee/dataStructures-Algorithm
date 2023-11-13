#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int a, b;
  cin>>a>>b;
  int cur = 0, res = 0;
  while(a > 0){
    a--;
    cur++;
    res++;
    if(cur == b){
      a++;
      cur = 0;
    }
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}