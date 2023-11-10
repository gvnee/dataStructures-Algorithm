#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

bool comp(const pair<int, int> &a, const pair<int, int> &b){
  return a.first < b.first;
}

void f(){
  int n, x;
  cin>>n>>x;
  vector<pair<int, int>> v(n);
  int t;
  for(int i = 0;i<n;i++){
    cin>>t;
    v[i] = {t, i};
  }
  sort(v.begin(), v.end());
  for(int i = 0;i<n;i++){
    for(int j = i+1;j<n;j++){
      int need = x - v[i].first + v[j].first;
      auto it = lower_bound(v.begin(), v.end(), need, comp);
      if(it == v.end()) continue;
      cout<<i+1<<" "<<j+1<<" "<<*it<<"\n";
      return;
    }
  }
  cout<<"IMPOSSIBLE\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}