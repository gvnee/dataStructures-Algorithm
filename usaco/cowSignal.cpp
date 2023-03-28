#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n, m, k;
  cin>>n>>m>>k;
  string a[n];
  for(int i = 0;i<n;i++)
    cin>>a[i];
  
  for(int i = 0;i<n*k;i++){
    for(int j = 0;j<m*k;j++)
      cout<<a[i/k][j/k];
    cout<<"\n";
  }
    
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  freopen("cowsignal.in", "r", stdin);
  freopen("cowsignal.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}