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
  ll n; cin>>n;
  ll l = 1, r = 10000000000;
  while(l<r){
    ll mid = l+(r-l)/2;
    if((mid * (mid-1) / 2 >= n)){
      r = mid;
    }
    else l = mid+1;
  }
  if(l * (l-1)/2 == n){
    cout<<l<<"\n";
  }
  else{
    l--;
    cout<< l + n - (l*(l-1)/2)<<"\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}