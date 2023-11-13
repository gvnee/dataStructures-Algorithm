#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  vector<int> a(n+1);
  for(int i = 1;i<=n;i++){
    a[i] = s[i-1] - '0';
    a[i] += a[i-1];
  }
  ll res = 0;
  for(int i = 1;i<=n;i++){
    ll sum = a[i] - a[i-1];
    ll end = i;
    while(sum <= end-i+1 && end<=n){
      if(end > n) end = n;
      cout<<end<<" "<<sum<<"\n";
      sum = a[end] - a[i-1];
      if(sum == end-i+1){
        res++;
        end++;
      }
      else if(a[i] - a[i-1] == 0){
        end++;
      }
      else end = sum;
      if(end == n) break;
    }
  }
  cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}