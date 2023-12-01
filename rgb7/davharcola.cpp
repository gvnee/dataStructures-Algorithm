#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  int n; cin>>n;
  
  ll cur = 5;
  int i = 1;
  while(n - cur > 0){
    n -= cur;
    cur *= 2;
    i *= 2;
  }
  if(n % i == 0) n /= i;
  else n = n/i + 1;
  if(n == 1) cout<<"Sheldon";
  if(n == 2) cout<<"Leonard";
  if(n == 3) cout<<"Penny";
  if(n == 4) cout<<"Rajesh";
  if(n == 5) cout<<"Howard";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}