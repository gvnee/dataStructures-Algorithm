/*
ID: gvne
PROG: combo
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

ifstream fin ("combo.in");
ofstream fout ("combo.out");

int fj[3], ms[3];


// Lock - 3
// 1 2 3 4 5
// n = 50, Lock = 1
// 1 - 2 = 49

int n;
bool valid(int a, int b){
  vector<int> v;
  for(int i = b - 2;i<=b+2;i++){
    int temp = i;
    if(temp<1){
      temp = n - temp-1;
    }
    else if(temp>n){
      temp -= n;
    }
    v.pb(temp);
  }
  for(auto it:v) if(it == a) return true;
  return false;
}

int main(){
  fin>>n;
  for(int i = 0;i<3;i++){
    fin>>fj[i];
  }
  for(int i = 0;i<3;i++){
    fin>>ms[i];
  }
  ll res = 0;
  for(int i = 1;i<=n;i++){
    for(int j = 1;j<=n;j++){
      for(int k = 1;k<=n;k++){
        if((valid(i, fj[0]) && valid(j, fj[1]) && valid(k, fj[2])) || (valid(i, ms[0]) && valid(j, ms[1]) && valid(k, ms[2]))){
          // fout<<i<<' '<<j<<' '<<k<<"\n";
          res++;
        }
      }
    }
  }

  fout<<res<<"\n";

  return 0;
}