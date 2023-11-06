#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int a, b;
  while(cin>>a){
    cin>>b;
    if(a < 1 || b < 1) return;
    int mn, mx;
    mn = min(a, b);
    mx = max(a, b);
    ll total = 0;
    for(int i = mn;i<=mx;i++){
      cout<<i<<" ";
      total += i;
    }
    cout<<"sum ="<<total<<"\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}