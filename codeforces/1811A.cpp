#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  string n;
  int a;
  char d;
  cin>>a>>d;
  cin>>n;
  bool t = false;
  if(d>n[0]){
    cout<<d;
    t = true;
  }
  for(char c:n){
    if(!t && d>c){
      cout<<d;
      t = true;
    }
    cout<<c;
  }
  if(!t) cout<<d;
  cout<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(0); cin.tie(0);

  int t = 1;
  cin>>t;
  while(t--) f();
  
  return 0;
}