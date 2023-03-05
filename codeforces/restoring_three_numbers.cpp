#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
  #endif
  int a[4];
  cin>>a[0]>>a[1]>>a[2]>>a[3];
  sort(a, a+4);
  cout<<a[3]-a[0]<<"\n";
  cout<<a[3]-a[1]<<"\n";
  cout<<a[3]-a[2]<<"\n";

  return 0;
}