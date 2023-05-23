#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  if(n < 3){
    cout<<0<<"\n";
    return;
  }
  int a[n];
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  sort(a, a+n);
  int mn = a[0];
  int mnc = 1;
  for(int i = 1;i<n;i++){
    if(a[i] == mn) mnc++;
    else break;
  }
  int mx = a[n-1];
  int mxc = 1;
  for(int i = n-2;i>=0;i--){
    if(a[i] == mx) mxc++;
    else break;
  }
  if(mx == mn) cout<<"0\n";
  else cout<<n-(mnc+mxc)<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}