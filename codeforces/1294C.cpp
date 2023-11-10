#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  ll n;
  cin>>n;
  set<int> c;
  for(int i = 2 ; i*i<=n && sz(c)<2 ; i++){
    if(n%i==0){
      n /= i;
      c.insert(i);
    }
  }

  bool no = false;
  for(int i:c){
    if(i == n) no = 1;
  }
  if(no || sz(c)<2){
    cout<<"NO\n";
    return;
  }
  cout<<"YES\n";
  for(int i:c) cout<<i<<" ";
  cout<<n<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}