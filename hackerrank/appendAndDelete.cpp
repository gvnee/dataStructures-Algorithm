#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  string a, b;
  int k;
  cin>>a>>b;
  cin>>k;
  int commonPrefix = 0;
  for(int i = 0;i<a.size();i++){
    if(i >= b.size()) break;
    if(a[i] == b[i]){
      commonPrefix++;
    }
    else break;
  }
  // cout<<a.size()<<"\n";
  // cout<<b.size()<<"\n";

  // cout<<commonPrefix<<"\n";
  // cout<<k;
  if(a.size() + b.size() - 2*commonPrefix <= k) cout<<"Yes\n";
  else cout<<"No\n";
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