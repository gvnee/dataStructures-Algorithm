#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n, m;
  cin>>n>>m;
  multiset<int> s;
  int a;
  for(int i = 0;i<n;i++){
    cin>>a;
    s.insert(a);
  }
  for(int i = 0;i<m;i++){
    cin>>a;
    auto it = s.upper_bound(a);
    if(it == s.begin()){
      cout<<"-1\n";
      continue;
    }
    it--;
    cout<<*it<<"\n";
    s.erase(it);
  }
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}