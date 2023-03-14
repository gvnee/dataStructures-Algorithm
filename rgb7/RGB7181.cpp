#include<bits/stdc++.h>
using namespace std;
int main(){
  long long r, g, b;
  cin>>r>>g>>b;
  long long res = 0;
  res = r/3 + g/3 + b/3;
  r %= 3;
  g %= 3;
  b %= 3;
  while(r > 0 && g != 0 && b != 0){
    res++;
    r--;
    g--;
    b--;
  }
  cout<<res<<"\n";

  return 0;
}