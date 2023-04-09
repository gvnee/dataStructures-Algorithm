#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  vector<string> v;
  int n, l;
  cin>>n>>l;
  for(int i = 0;i<n;i++){
    string str;
    cin>>str;
    v.push_back(str);
  }
  sort(v.begin(), v.end());
  for(int i = 0;i<n;i++){
    cout<<v[i];
  }
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