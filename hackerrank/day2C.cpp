#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

int getDays(int a[], int start, int oneC,int n){
  int b[oneC+1];
  int c = 1;
  int cur = 1;
  for(int i = start;i<=7;i++){
    if(cur>oneC) break;
    if(a[i] == 1){
      b[cur] = c;
      cur++;
    }
    if(i>=7) i = 0;
    c++;
  }
  int res;
  if(n%oneC == 0){
    res = (n/oneC-1) * 7 + b[oneC];
  }
  else res = n/oneC * 7 + b[n%oneC];
  return res;
}

void f(){
  ll n;
  cin>>n;
  int a[8];
  int oneC = 0;
  for(int i = 1;i<=7;i++){
    cin>>a[i];
    if(a[i] == 1) oneC++;
  }
  int res = INT_MAX;
  for(int i = 1;i<=7;i++){
    if(a[i] == 1){
      temp = getDays(a, i, oneC, n);
      res = min(res, temp);
    }
  }
  cout<<res<<"\n";
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