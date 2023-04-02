#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  ll w, h;
  cin>>w>>h;
  ll x1, y1, x2, y2;
  cin>>x1>>y1>>x2>>y2;
  ll width = x2 - x1;
  ll height = y2 - y1;
  ll w1, h1;
  cin>>w1>>h1;
  if(w1 + width > w && h1 + height > h){
    cout<<-1<<"\n";
    return;
  }

  ll res = INT64_MAX;

  ll x, y;

  if(height + h1 <= h){
    if(y1 >= h1){
      res = 0;
    }
    else{
      res = h1 - y1;
    }

  }
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while(t--) f();
  
  return 0;
}