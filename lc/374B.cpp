#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

int minimumAddedCoins(vector<int>& coins, int target){
  bool can[(int)1e5+1] = {};

  for(int x:coins){
    for(int i = 1;i<=target;i++){
      if(i-x>=0){
        if(can[i-x]) can[i] = true;
      }
    }
  }

  for(int i = 1;i<=target;i++) if(can[i]) cout<<i<<" ";
  
  int res = 0;
  for(int i = 1;i<=target;i++){
    if(i >= (target-1)/2) break;
    if(!can[i]){
      // cout<<i<<" ";
      res++;
      can[i+i-1] = true;
      i += i-1;
    }
    while(can[i+1]) i++;
    if(can[i]) i += i-1;
  }
  return res;
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}