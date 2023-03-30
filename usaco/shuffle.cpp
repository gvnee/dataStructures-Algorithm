#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n;
  cin>>n;
  int a[n+1];
  for(int i = 1;i<=n;i++){
    cin>>a[i];
  }
  string s[n+1];
  for(int i = 1;i<=n;i++){
    cin>>s[i];
  }
  string temp[n+1];
  for(int k = 1;k<=3;k++){
    for(int i = 1;i<=n;i++){
      temp[i] = s[a[i]];
    }
    for(int i = 1;i<=n;i++){
      s[i] = temp[i];
    }
  }
  for(int i = 1;i<=n;i++){
    cout<<s[i]<<"\n";
  }
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  freopen("shuffle.in", "r", stdin);
  freopen("shuffle.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}