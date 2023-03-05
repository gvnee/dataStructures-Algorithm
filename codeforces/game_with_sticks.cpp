#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  // freopen("input.txt", "r", stdin);
  int a, b;
  cin>>a>>b;
  int m = min(a, b);
  if(m%2==0) cout<<"Malvika\n";
  else cout<<"Akshat\n";
  return 0;
}