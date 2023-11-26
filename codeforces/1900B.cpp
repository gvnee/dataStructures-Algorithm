#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back
#define F first
#define S second

void f(){
  vector<pair<int, int>> a;

  for(int i = 0;i<3;i++){
    int t;
    cin>>t;
    a.pb({t, i});
  }

  sort(a.begin(), a.end());
  if(a[0].F == a[2].F && a[0].F == a[1].F){
    cout<<"1 1 1\n";
    return;
  }

  while(a[0].F != 0 || a[1].F != 0){
    a[0].F += a[1].F;
    a[2].F -= a[1].F;
    a[1].F -= a[1].F;
    sort(a.begin(), a.end());
    if(a[0].F == a[2].F && a[0].F == a[1].F){
      cout<<"1 1 1\n";
      return;
    }
  }
  sort(a.begin(), a.end());
  if(a[2].S == 0){
    cout<<"1 0 0\n";
  }
  else if(a[2].S == 1){
    cout<<"0 1 0\n";
  }
  else cout<<"0 0 1\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}


