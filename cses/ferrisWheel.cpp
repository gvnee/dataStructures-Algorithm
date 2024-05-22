#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  int n, x; cin>>n>>x;
  int a[n];
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  sort(a, a+n);
  int res = 0;

  int l = 0, r = n-1;
  while(l<=r){
    if(l == r){
      res++;
      break;
    }
    if(a[l] + a[r] <= x){
      res++;
      l++;
      r--;
    }
    else r--, res++;
  }
  
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}