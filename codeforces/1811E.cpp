#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  ll n;
  cin>>n;
  vector<int> res;
  while(n > 0){
    int r = n%9;
    n /= 9;
    if(r>=4){
      r++;
    }
    res.push_back(r);
  }
  for(int i = sz(res) - 1;i>=0;i--) cout<<res[i];
  cout<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(0); cin.tie(0);

  int t = 1;
  cin>>t;
  while(t--) f();
  
  return 0;
}