#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  if((n / 2) % 2 != 0){
    cout<<"NO\n";
    return;
  }
  cout<<"YES\n";
  int sum = 0;
  for(int i = 2;i<=n;i+=2){
    cout<<i<<" ";
    sum += i;
  }
  int sum2 = 0;
  for(int i = 1;i<n-1;i+=2){
    cout<<i<<" ";
    sum2 += i;
  }
  cout<<sum - sum2<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}