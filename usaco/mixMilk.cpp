#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

void f(){
  vector<int> m(3);
  vector<int> c(3);
  for(int i = 0;i<3;i++){
    cin>>c[i]>>m[i];
  }

  for(int i = 0;i<100;i++){
    int b1 = i%3;
    int b2 = (i+1)%3;
    int amountToPour = min(m[b1], c[b2] - m[b2]);

    m[b2] += amountToPour;
    m[b1] -= amountToPour;
  }

  for(int i:m) cout<<i<<"\n";

}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  freopen("mixmilk.in", "r", stdin);
  freopen("mixmilk.out", "w", stdout);

  int t = 1;
  // cin>>t;
  while(t--) f();

  return 0;
}