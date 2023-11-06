#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

bool lucky(int a){
  while(a != 0){
    if(a == 7 || a == 4) return true;
    if(a%10 != 7 && a % 10 != 4) return false;
    a /= 10;
  }
  return true;
}

void f(){
  int a, b;
  cin>>a>>b;
  bool f = true;
  for(int i = a;i<=b;i++){
    if(lucky(i)){
      cout<<i<<" ";
      f = false;
    }
  }
  if(f) cout<<"-1\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}