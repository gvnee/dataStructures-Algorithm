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
  ll oneCount = 0;
  for(int i = 0;i<7;i++){
    cin>>arr[i];
    if(arr[i] == 1){
      oneCount++;
    }
  }

  ll bestCost = INT64_MAX;
  ll bestIndex;

  for(ll i = 0;i<7;i++){
    if(arr[i] == 0) continue;
    ll cur = 1;
    ll curIndex = i;
    ll curCost = 0;
    ll c = 0;
    while(cur<=69){
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
  while(cur<=k){
    curCost++;
    if(arr[curIndex] == 1){
      cur++;
    }
    if(curIndex == 6) curIndex = 0;
    else curIndex++;
  }

  cout<<curCost<<"\n";
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