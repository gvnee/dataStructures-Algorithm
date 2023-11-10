#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  ll n;
  cin>>n;
  ll row = n/4;
  ll col = 0;
  if(row%2){
    col = 4 - n%4-1;
  }
  else{
    col = n%4;
  }
  cout<<row<<" "<<col<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}