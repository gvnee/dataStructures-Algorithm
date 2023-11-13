#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  for(int k = 2;k<=33;k++){
    ll cur = (1<<k)-1;
    if(n % cur == 0){
      cout<<n/cur<<"\n";
      return;
    }
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}