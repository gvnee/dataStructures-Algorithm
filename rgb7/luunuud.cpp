#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
#define pi pair<int, int>
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  int s, n; cin>>s>>n;
  vector<pi> a;
  for(int i = 0;i<n;i++){
    int h, b;
    cin>>h>>b;
    a.pb({h, b});
  }
  sort(all(a));
  for(auto x:a){
    if(x.F>=s){
      cout<<"NO";
      return;
    }
    s += x.S;
  }
  cout<<"YES";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}