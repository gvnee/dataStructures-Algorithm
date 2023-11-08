#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  pair<int, int> a[n];
  for(int i = 0;i<n;i++){
    int x, h;
    cin>>x>>h;
    a[i] = {x, h};
  }
  ll res = 2;
  bool lastRight = false;
  for(int i = 1;i<n-1;i++){
    int prev = a[i-1].first;
    if(lastRight){
      prev += a[i-1].second;
      lastRight = false;
    }
    if(a[i].first - a[i].second > prev) res++;
    else if(a[i].first + a[i].second < a[i+1].first){
      lastRight = true;
      res++;
    }
  }
  if(n == 1) cout<<"1\n";
  else cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}