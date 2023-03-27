#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n;
  cin>>n;
  int a[n], b[n];
  int aMx = 0, bMx = 0;
  for(int i = 0;i<n;i++){
    cin>>a[i];
    aMx = max(aMx, a[i]);
  }
  for(int i = 0;i<n;i++){
    cin>>b[i];
    bMx = max(bMx, b[i]);
  }
  int aLast = a[n-1];
  int bLast = b[n-1];
  for(int i = n-2;i>=0;i--){
    if(a[i] > aLast){
      if(a[i] > bLast){
        cout<<"NO\n";
        return;
      }
      else if(b[i] > aLast){
        cout<<"NO\n";
        return;
      }
    }
    if(b[i] > bLast){
      if(b[i] > aLast){
        cout<<"NO\n";
        return;
      }
      else if(a[i] > bLast){
        cout<<"NO\n";
        return;
      }
    }
  }
  cout<<"YES\n";

}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
  #endif

  int t = 1;
  cin>>t;
  while(t--) f();
  
  return 0;
}