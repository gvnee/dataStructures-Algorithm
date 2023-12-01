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
  ll n, k; cin>>n>>k;
  ll r = 0;
  while(n>0){
    if(n % k == 0){
      n /= k;
      r++;
    }
    else{
      ll w = n/k;
      ll rem = n - w*k;
      n -= rem;
      r += rem;
    }
  }
  cout<<r<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}