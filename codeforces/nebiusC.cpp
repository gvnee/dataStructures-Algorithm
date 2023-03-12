#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
int temp;

ll arr[1000001];
void preprocess(){
  arr[0] = 0;
  for(int i = 1;i<1000000;i++){
    arr[i] = i*(i+1)/2;
  }
}


void f(){
  ll n, x, f;
  cin>>n>>x>>f;
  ll i = 1, cur;

  ll mid;
  while(true){
    ll l = 0, r = f;
    cur = n*i-x;
    while(r-l>1){
      mid = l + (r-l+1)/2;
      ll midValue = arr[mid];
      if(arr[mid] == cur){
        cout<<"YES\n";
        return;
      }
      else if(cur < arr[mid]){
        r = mid;
      }
      else l = mid;
    }
    i++;
    if(cur > arr[f]){
      cout<<"NO\n";
      return;
    }
  }

  // while(true){
  //   cur = n*i-x;
  //   if(cur == arr[j]){
  //     cout<<"YES\n";
  //     return;
  //   }
  //   else if(cur > arr[j]) j++;
  //   else i++;
  //   if(j>f){
  //     cout<<"NO\n";
  //     return;
  //   }
  // }
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.in", "r", stdin);
  #endif

  int t = 1;
  cin>>t;
  preprocess();
  while(t--) f();
  // for(int i = 0;i<100;i++){
  //   cout<<arr[i]<<" ";
  // }
  
  return 0;
}