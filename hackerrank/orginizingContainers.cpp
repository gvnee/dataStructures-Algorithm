#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n;
  cin>>n;
  ll con[n] = {};
  ll val[n] = {};
  for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
      cin>>temp;
      val[i] += temp;
      con[j] += temp;
    }
  }
  // for(int i = 0;i<n;i++){
  //   cout<<con[i]<<" "<<val[i]<<"\n";
  // }
  sort(con, con+n);
  sort(val, val+n);
  for(int i = 0;i<n;i++){
    if(con[i] != val[i]){
      cout<<"Impossible\n";
      return;
    }
  }
  cout<<"Possible\n";
  
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