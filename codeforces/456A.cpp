#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  int a, b;
  bool happy = false;
  for(int i = 0;i<n;i++){
    cin>>a>>b;
    if(a != b){
      happy = true;
    }
  }
  if(happy) cout<<"Happy Alex\n";
  else cout<<"Poor Alex\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}