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
  if(n%2 == 0){
    cout<<"-1\n";
    return;
  }
  vector<int> v;
  int res = 0;
  while(n>1){
    res++;
    n /= 2;
    if(n % 2 == 0){
      v.push_back(1);
      n++;
    }
    else{
      v.push_back(2);
      n--;
    }
  }
  cout<<res<<"\n";
  for(int i = sz(v)-1; i>=0;i--) cout<<v[i]<<" \n"[i==0];
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  int t = 1;
  cin>>t;
  while(t--) f();
  
  return 0;
}