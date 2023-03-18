#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

bool cmp(int a, int b){
  return a>b;
}

void f(){
  ll n, k;
  cin>>n>>k;
  ll arr[n], cp[n];
  unordered_map<ll, int> m;
  for(int i = 0;i<n;i++){
    cin>>arr[i];
    cp[i] = arr[i];
    m[arr[i]] = i;
  }

  sort(cp, cp+n, cmp);

  // for(int i = 0;i<n;i++) cout<<cp[i]<<" \n"[i==n-1];

  for(int i = 0;i<k && i<n;i++){
    if(arr[i] != cp[i]){
      
      int index = m[cp[i]];

      temp = arr[i];
      arr[i] = arr[index];
      arr[index] = temp;

      m[arr[i]] = i;
      m[arr[index]] = index;

    } else k++;
  }
  for(int i = 0;i<n;i++) cout<<arr[i]<<' ';
  cout<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);
  #endif

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}