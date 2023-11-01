#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back
ll n;

// void f(){
//   int n;
//   cin>>f;
//   if(n&(n-1) == 0) cout"NO\n";
//   cout<<"YES\n";
// }

void f(){
  if(n % 2){
    cout<<"YES\n";
    return;
  }
  for(ll i = 2;i<=sqrt(n);i++){
    if(n % i == 0){
      if(i % 2 || (n/i)%2){
        cout<<"YES\n";
        return;
      }
    }
  }
  cout<<"NO\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  for(n = 1;n<=100;n++){
    cout<<n<<" ";
    f();
  }
  return 0;
}