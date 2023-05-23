#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int k, n, s;
  cin>>k>>n>>s;
  int arr[n] = {};
  bool full[n] = {};
  int next[n];
  for(int i = 0;i<n;i++) next[i] = i;
  ll res = 0;
  int a;
  bool allFull = false;
  while(k--){
    cin>>a; a--;
    if(allFull){
      res++;
      continue;
    }
    if(full[a]){
      if(next[a] == a){
        next[a] = next[(a+1)%n];
        if(full[next[a]]) allFull = true;
        else{
          arr[next[a]]++;
          
        }
      }
      res++;
    }
    else{
      arr[a]++;
      if(arr[a] >= s){
        full[a] = true;
        next[a] = next[(a+1)%n];
      }
    }
    for(int i = 0;i<n;i++) cout<<arr[i]<<" \n"[i==n-1];
  }
  cout<<res<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}