#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n = 0;
  cin>>n;
  ll res = 0;
  int a, b;
  for(int i = 0;i<n;i++){
    cin>>a>>b;
    if(a>b) res++;
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}