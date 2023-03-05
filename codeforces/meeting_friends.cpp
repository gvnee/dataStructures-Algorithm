#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  // freopen("input.txt", "r", stdin);
  ll a[3];
  cin>>a[0]>>a[1]>>a[2];
  sort(a, a+3);
  cout<<a[1]-a[0] + a[2]-a[1]<<"\n";

  return 0;
}