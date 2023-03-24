#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  int a[26];
  memset(a, -1, sizeof(a));
  for(int i = 0;i<s.size();i++){
    int c = s[i] - 97;
    // debug(i%2);
    if(a[c] == -1){
      a[c] = i%2;
    }
    else if(a[c] != i%2){
      cout<<"NO\n";
      return;
    }
  }
  cout<<"YES\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
  #endif

  int t = 1;
  cin>>t;
  while(t--) f();
  
  return 0;
}