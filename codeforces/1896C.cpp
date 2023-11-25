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
  int b[n], res[n];
  for(int i = 0;i<n;i++){
    int t;
    cin>>t;
    a.pb({t, i});
  }
  for(int i = 0;i<n;i++) cin>>b[i];

  sort(a.rbegin(), a.rend());
  sort(b, b+n);

  int beauty = 0, ai = n-1;

  for(int i = 0;i<n;i++){
    if(beauty < x){
      if(a[i].F > b[i]){
        beauty++;
        res[a[i].S] = b[i];
      }
      else {
        cout<<"NO\n";
        return;
      }
    }
    else{
      if(a[ai].F > b[i]){
        cout<<"NO\n";
        return;
      }
      res[a[ai].S] = b[i];
      ai--;
    }
  }
  cout<<"YES\n";
  for(int i = 0;i<n;i++) cout<<res[i]<<" ";
  cout<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}