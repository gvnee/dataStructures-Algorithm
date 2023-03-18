#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

bool cmp(string a, string b){
  if(a.size() > b.size()){
    return false;
  }
  else if(a.size() < b.size()){
    return true;
  }
  else{
    for(int i = 0;i<a.size();i++){
      if(a[i] > b[i]) return false;
      else if(a[i] < b[i]) return true;
    }
  }
  return false;
}

void f(){
  int n;
  cin>>n;
  vector<string> v;
  v.reserve(n);
  string s;
  for(int i = 0;i<n;i++){
    cin>>s;
    v.push_back(s);
  }
  sort(v.begin(), v.end(), cmp);
  for(auto it:v) cout<<it<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
  #endif

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}