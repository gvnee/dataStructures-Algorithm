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
  int n, q; cin>>n>>q;
  int a[n+1];
  ll pre[n+1] = {};
  vector<int> v = {};
  vector<int> ind = {};
  for(int i = 1;i<=n;i++){
    cin>>a[i];

    if(v.empty() || a[i] > v.back()){
      v.pb(a[i]);
      ind.pb(i);
    }

    pre[i] = pre[i-1] + a[i];
  }
  while(q--){
    int k; cin>>k;
    auto it = upper_bound(all(v), k);
    int i = distance(v.begin(), it);
    if(it == v.end()){
      cout<<pre[n]<<" ";
    }
    else{
      cout<<pre[ind[i]-1]<<" ";
    }
  }
  cout<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}