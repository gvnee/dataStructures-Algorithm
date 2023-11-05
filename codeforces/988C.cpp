#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

const int mxn = 2e5+5;
vector<array<int, 3>> t;
int a[mxn];
void f(){
  int k, n;
  cin>>k;
  
  for(int i = 1;i<=k;i++){
    cin>>n;
    ll total = 0;
    for(int j = 1;j<=n;j++){
      cin>>a[j];
      total+=a[j];
    }

    for(int j = 1;j<=n;j++){
      array<int, 3> ar = {total - a[j], i, j};
      t.pb(ar);
    }
  }
  sort(t.begin(), t.end());
  for(int i = 1;i<sz(t);i++){
    if(t[i][0] == t[i-1][0]){
      if(t[i][1] != t[i-1][1]){
        cout<<"YES\n";
        cout<<t[i][1]<<" "<<t[i][2]<<"\n";
        cout<<t[i-1][1]<<" "<<t[i-1][2]<<"\n";
        return;
      }
    }
  }
  cout<<"NO\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  // cout<<(clock() * 1.0 / CLOCKS_PER_SEC)<<"\n";
  return 0;
}