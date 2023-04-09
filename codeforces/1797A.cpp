#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

void f(){
  int n, m;
  cin>>n>>m;
  int x1, y1, x2, y2;
  cin>>x1>>y1>>x2>>y2;
  if(((x1 == 1 || x1 == n) && (y1 == 1 || y1 == m)) || ((x2 == 1 || x2 == n) && (y2 == 1 || y2 == m))){
    cout<<2<<"\n";
  }
  else if(((x1 == 1 || x1 == n) || (y1 == 1 || y1 == m)) ||( (x2 == 1 || x2 == n) || (y2 == 1 || y2 == m))){
    cout<<3<<"\n";
  }
  else{
    cout<<4<<"\n";
  }
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}