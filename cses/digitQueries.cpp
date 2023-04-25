#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

string s;
void preProcess(){
  for(int i = 1;i<=1000000;i++){
    s += to_string(i);
  }
}

void f(){
  ll n;
  cin>>n;
  cout<<s[n-1]<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  preProcess();
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}