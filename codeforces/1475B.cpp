#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  for(int i = 1;i<=1000 && i * 2021 <= n;i++){
    int cur = n - 2021 * i;
    if(cur % 2020 == 0 && cur >= 0){
      cout<<"YES\n";
      return;
    }
  }
  for(int i = 1;i<=1000 && i * 2020 <= n;i++){
    int cur = n - 2020 * i;
    if(cur % 2021 == 0 && cur >= 0){
      cout<<"YES\n";
      return;
    }
  }
  cout<<"NO\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}