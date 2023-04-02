#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

struct Par{
  ll a, b, c;
};

void f(){
  ll n, m;
  cin>>n>>m;
  ll k[n];
  for(int i = 0;i<n;i++){
    cin>>k[i];
  }
  vector<Par> p;
  for(int i = 0;i<m;i++){
    cin>>p[i].a>>p[i].b>>p[i].c;
  }

  //(b-k)*(b-k)-4*a*c
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while(t--) f();
  
  return 0;
}