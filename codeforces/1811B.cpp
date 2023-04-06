#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  ll n, x1, x2, y1, y2;
  cin>>n;
  cin>>x1>>y1>>x2>>y2;
  if(x1 > n/2){
    x1 -= (x1-n/2)*2-1;
  }
  if(x2 > n/2){
    x2 -= (x2-n/2)*2-1;
  }
  if(y1 > n/2){
    y1 -= (y1-n/2)*2-1;
  }
  if(y2 > n/2){
    y2 -= (y2-n/2)*2-1;
  }

  cout<<abs(min(x1, y1) - min(x2, y2))<<"\n";

}

int main(){
  
  ios_base::sync_with_stdio(0); cin.tie(0);
  // freopen("input.in", "r", stdin);
  int t = 1;
  cin>>t;
  while(t--) f();
  
  return 0;
}