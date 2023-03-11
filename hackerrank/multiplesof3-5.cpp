#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
  ll n;
  cin>>n;
  n--;

  ll three = n/3;
  ll five = n/5;
  ll fifteen = n/15;
  
  ll biggestThree = n - n%3;
  ll biggestFive = n - n%5;
  ll biggestFifteen = n - n%15;



  int a = 0,b = 0,c = 0;
  if(n>=3) a = (three * (3 + biggestThree))/2;
  if(n>=5) b = (five * (5 + biggestFive))/2;
  if(n>=15) c = (fifteen * (15 + biggestFifteen))/2;

  // ll res = 3*(three*(three+1)/2) + 5*(five*(five+1)/2) - 15*(fifteen*(fifteen+1)/2);

  ll res = a+b-c;
  cout<<res<<"\n";
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  int t;
  cin>>t;
  while(t--) solve();
  return 0;
}