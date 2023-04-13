/*
ID: gvne
PROG: milk
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

ifstream fin ("milk.in");
ofstream fout ("milk.out");

int main(){
  ll n, m;
  fin>>n>>m;
  vector<pair<int, int>> v;
  int a, b;
  for(int i = 0;i<m;i++){
    fin>>a>>b;
    v.pb({a, b});
  }

  sort(v.begin(), v.end());

  ll res = 0;
  
  for(auto i:v){
    if(n <= 0) break;
    if(i.second > n){
      res += n * i.first;
      break;
    }
    else{
      res += i.first * i.second;
      n -= i.second;
    }
  }

  fout<<res<<"\n";
    
  return 0;
}