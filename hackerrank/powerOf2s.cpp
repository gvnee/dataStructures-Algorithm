#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  ll a = 1;
  for(int i = 1;i<=32;i++){
    a *= 2;
    cout<<i<<" "<<a<<"\n";
    cout<<fixed<<pow(2, i)<<"\n";
  }
  return 0;
}