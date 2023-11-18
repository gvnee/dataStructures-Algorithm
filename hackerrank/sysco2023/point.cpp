#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  int a, b, c;
  vector<pair<int, int>> r;
  for(int i = 0;i<n;i++){
    cin>>a>>b>>c;
    if(c<=b){
      r.pb({c-a, i+1});
    }
  }
  sort(r.rbegin(), r.rend());
  if(r[0].first == r[1].first){
    cout<<min(r[0].second, r[1].second)<<"\n";
    cout<<max(r[0].second, r[1].second)<<"\n";
  }
  else{
    cout<<r[0].second<<"\n";
    cout<<r[1].second<<"\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}