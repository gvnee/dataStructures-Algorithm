#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  int cur = 1;
  for(int i = 1;i<=n;i++){
    for(int s = 1;s<=n-i;s++) cout<<' ';
    for(int c = 1;c<=cur;c++) cout<<'*';
    cout<<"\n";
    cur+=2;
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}