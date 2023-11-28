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
  int a[n];
  for(int i = 0;i<n;i++) cin>>a[i];
  int l = 0, r = n-1;
  ll s1 = 0, s2 = 0;
  int r1 = 0, r2 = 0;
  while(l <= r){
    if(l == r){
      if(s1 <= s2) r1++;
      else r2++;
      break;
    }
    if(s1 < s2){
      s1+=a[l];
      r1++;
      l++;
    }
    else if(s1 > s2){
      s2 += a[r];
      r2++;
      r--;
    }
    else{
      s1 += a[l]; s2 += a[r];
      r1++, r2++;
      l++, r--;
    }
  }
  cout<<r1<<" "<<r2;
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}