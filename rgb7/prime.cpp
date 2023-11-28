#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

const int mxn = 1e6;

void f(){
  ll n; cin>>n;
  if(n == 0 || n == 1) {cout<<"NO"; return;}
  for(ll i = 2;i*i<=n;i++){
    if(n%i == 0){
      cout<<"NO";
      return;
    }
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