#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  string str;
  cin>>str;
  unordered_map<char, int> m;
  for(char c:str){
    if(m.count(c) == 0) m[c] = 1;
    else m[c]++;
  }
  if(m.size() == 1) cout<<"-1\n";
  else if(m.size() == 4 || m.size() == 3) cout<<"4\n";
  else{
    for(auto it:m){
      if(it.second == 2){
        cout<<"4\n";
        return;
      }
    }
    cout<<"6\n";
  }
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