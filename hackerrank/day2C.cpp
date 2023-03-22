#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  ll k;
  cin>>k;
  ll arr[7];
  ll cost[8];
  for(int i = 0;i<7;i++) cin>>arr[i];

  ll bestCost = INT64_MAX;
  ll bestIndex;

  for(ll i = 0;i<7;i++){
    if(arr[i] == 0) continue;
    ll cur = 1;
    ll curIndex = i;
    ll curCost = 0;
    ll c = 0;
    while(cur<=7){
      curCost++;
      if(arr[curIndex] == 1){
        c += curCost;
        cur++;
      }
      if(curIndex == 6) curIndex = 0;
      else curIndex++;
    }
    if(c < bestCost){
      bestIndex = i;
      bestCost = c;
    }
  }
  ll cur = 1;
  ll curIndex = bestIndex;
  ll curCost = 0;
  while(cur<=7){
    curCost++;
    if(arr[curIndex] == 1){
      cost[cur] = curCost;
      cur++;
    }
    if(curIndex == 6) curIndex = 0;
    else curIndex++;
  }

  if(k%7==0) cout<<k/7*cost[7]<<"\n";
  else cout<<k/7*cost[7] + cost[k%7]<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
  #endif

  int t = 1;
  cin>>t;
  while(t--) f();
  
  return 0;
}