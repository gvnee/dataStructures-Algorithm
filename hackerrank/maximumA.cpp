#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n";

struct st{
  ll a, b;
  int i;
};

bool cmp(st a, st b){
  return a.a > b.a;
}

void f(){
  ll n;
  cin>>n;

  vector<st> v(n);

  ll xa = 0, xb = 0;
  for(ll i = 0;i<n;i++){
    cin>>v[i].a;
    v[i].i = i+1;
    xa ^= v[i].a;
  }
  for(ll i = 0;i<n;i++){
    cin>>v[i].b;
    xb ^= v[i].b;
  }

  sort(v.begin(), v.end(), cmp);

  ll res = xa + xb;
  vector<int> r;
  int c = 0;
  for(int i = 0;i<n;i++){
    if((xa ^ v[i].a ^ v[i].b) + (xb ^ v[i].a ^ v[i].b) > res){
      c++;
      r.push_back(v[i].i);
      xa ^= v[i].a ^ v[i].b;
      xb ^= v[i].a ^ v[i].b;
      res = xa + xb;
    }
  }
  sort(r.begin(), r.end());
  cout<<res<<' '<<c<<"\n";
  for(int x:r) cout<<x<<" ";
  cout<<"\n";

}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);

  int t = 1;
  // cin>>t;
  while(t--) f();

  return 0;
}