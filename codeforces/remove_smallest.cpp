#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[100];
    for(int i = 0;i<n;i++){
      cin>>a[i];
    }
    sort(a, a+n);
    bool no = false;
    for(int i = 0;i<n-1;i++){
      if(a[i+1]-a[i]>1){
        cout<<"NO\n";
        no = true;
        break;
      }
    }
    if(!no) cout<<"YES\n";
  }
  return 0;
}