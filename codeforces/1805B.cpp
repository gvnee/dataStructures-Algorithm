#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  ll n;
  cin>>n;
  string s;
  cin>>s;
  string c = s;
  sort(c.begin(), c.end());
  for(int j = sz(s)-1;j>=0;j--){
    if(c[0] == s[j]){
      char ins = s[j];
      s.erase(j, 1);
      s.insert(s.begin(), ins);
      cout<<s<<"\n";
      return;
    }
  }
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while(t--) f();
  
  return 0;
}