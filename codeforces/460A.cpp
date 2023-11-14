#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n, m;
  cin>>n>>m;
  int day = 0;
  while(n > 0){
    n--;
    day++;
    if(day % m == 0) n++;
  }
  cout<<day<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}