#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  int m = 0, c = 0;
  for(int i = 0;i<n;i++){
    int a, b;
    cin>>a>>b;
    if(a>b) m++;
    else if(b>a)c++;
  }
  if(m == c) cout<<"Friendship is magic!^^\n";
  else if(m>c) cout<<"Mishka\n";
  else cout<<"Chris\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}