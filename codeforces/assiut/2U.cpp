#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

int digit(int a){
  int s = 0;
  while(a != 0){
    s += a%10;
    a /= 10;
  }
  return s;
}

void f(){
  int n, a, b;
  cin>>n>>a>>b;
  int res =  0;
  for(int i = 1;i<=n;i++){
    int c = digit(i);
    if(a<=c && c<=b) res+=i;
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}