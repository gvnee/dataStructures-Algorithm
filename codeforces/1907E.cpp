#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

int ds(int a){
  int c = 0;
  while(a > 0){
    c += a%10;
    a/=10;
  }
  return c;
}

void f(){
  int n; cin>>n;
  int need = ds(n);
  for(int i = 0;i<n;i++){
    if(ds(i) > need) continue;
    for(int j = 0;j<n;j++){
      int k = n - i - j;
      if(k<0 || ds(i) + ds(j) + ds(k) > )
    }
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}