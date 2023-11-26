#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back
#define F first
#define S second

bool comp(pair<int, int> x, pair<int, int> y){
  return x.S < y.S;
}

void f(){
  int n, x;
  cin>>n>>x;
  vector<pair<int, int>> a;
  int b[n], r[n];
  for(int i = 0;i<n;i++){
    int t;
    cin>>t;
    a.pb({t, i});
  }
  for(int i = 0;i<n;i++) cin>>b[i];
  sort(a.begin(), a.end());
  sort(b, b+n);

  for(int i = 0;i<x;i++){
    r[a[n-x+i].S] = b[i];
  }
  for(int i = x;i<n;i++){
    r[a[i-x].S] = b[i];
  }
  int beauty = 0;
  sort(a.begin(), a.end(), comp);
  for(int i = 0;i<n;i++){
    if(a[i].F > r[i]) beauty++;
  }

  if(beauty == x){
    cout<<"YES\n";
    for(int i = 0;i<n;i++) cout<<r[i]<<" ";
    cout<<"\n";
  }
  else cout<<"NO\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}