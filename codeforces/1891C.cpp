#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

int solveOne(int a, int x){
  int r = 0;
  int cur = a;
  int ogX = x;
  while(x < cur){
    r++;
    x++;
    cur--;
  }
  return min({a, r+1, a-ogX+1});
}

void f(){
  int n;
  cin>>n;
  int a[n];
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  sort(a, a+n);
  int l = 0, r = n-1;
  ll x = 0, res = 0;
  while(l<=r){
    if(x == a[r]){
      a[r] -= x;
      x = 0;
      r--;
      res++;
    }
    if(l == r){
      res+=solveOne(a[l], x);
      break;
    }
    if(x + a[l] <= a[r]){
      res+=a[l];
      x+=a[l];
      l++;
    }
    else{
      res+=a[r] - x;
      a[l] = a[r] - x;
      x+=a[r] - x;
    }
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}