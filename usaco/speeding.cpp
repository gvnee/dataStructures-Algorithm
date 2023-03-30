#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n, m;
  cin>>n>>m;
  int a, b;
  vector<int> x;
  vector<int> y;
  for(int i = 0;i<n;i++){
    cin>>a>>b;
    while(a--){
      x.push_back(b);
    }
  }
  for(int i = 0;i<m;i++){
    cin>>a>>b;
    while(a--){
      y.push_back(b);
    }
  }
  int res = 0;
  for(int i = 0;i<100;i++){
    res = max(res, y[i] - x[i]);
  }
  cout<<res<<"\n";

}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  freopen("speeding.in", "r", stdin);
  freopen("speeding.out", "w", stdout);
  
  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}