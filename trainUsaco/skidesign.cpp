/*
ID: gvne
PROG: skidesign
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

ifstream fin ("skidesign.in");
ofstream fout ("skidesign.out");

void f(){
  int n;
  fin>>n;
  vector<int> v(n);
  for(int i = 0;i<n;i++)
    fin>>v[i];
  ll res = INT_MAX;
  for(int i = 17;i<=100;i++){
    int upper = i;
    int lower = i - 17;    
    ll cur = 0;
    for(auto x:v){
      if(x>upper){
        cur += (x - upper) * (x - upper);
      }
      else if(x<lower){
        cur += (lower - x) * (lower - x);
      }
    }
    res = min(res, cur);
  }
  fout<<res<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); fin.tie(0);
  int t = 1;
  // fin>>t;
  while(t--) f();
  return 0;
}