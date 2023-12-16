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
  int n;
  cin>>n;
  vector<ll> a = {1, 11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111, 1111111111, 11111111111, 111111111111, 1111111111111};
  set<ll> s;
  for(int i = 0;i<sz(a);i++){
    for(int j = 0;j<sz(a);j++){
      for(int k = 0;k<sz(a);k++){
        if(s.count(a[i] + a[j] + a[k]) == 0){
          s.insert(a[i] + a[j] + a[k]);
        }
      }
    }
  }

  int c = 1;
  for(auto x:s){
    if(c == n){
      cout<<x<<"\n";
      return;
    }
    c++;
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}