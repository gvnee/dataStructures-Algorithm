#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
int temp;

void f(){
  string s;
  cin>>s;
  int loc = 1;
  for(int i = 0;i<s.size();i++){
    if(s[i] == 'A'){
      if(loc == 1) loc = 2;
      else if(loc == 2) loc = 1;
    }
    if(s[i] == 'B'){
      if(loc == 2) loc = 3;
      else if(loc == 3) loc = 2;
    }
    if(s[i] == 'C'){
      if(loc == 3) loc = 1;
      else if(loc == 1) loc = 3;
    }
  }
  cout<<loc<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  // #ifndef ONLINE_JUDGE
  // freopen("input.in", "r", stdin);
  // #endif

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}