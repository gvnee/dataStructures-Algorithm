#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

bool c(int n){
  int a[10] = {};
  while(n!=0){
    int l = n%10;
    if(a[l]) return false;
    a[l]++;
    n /= 10;
  }
  return true;
}

void f(){
  int n; cin>>n; n++;
  while(!c(n)){
    n++;
  }
  cout<<n;
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}