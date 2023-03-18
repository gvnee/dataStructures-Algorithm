#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

int minimumSwap(int arr[], int sorted[], int size){
  int swap = 0;
  unordered_map<int, int> m;
  for(int i = 0;i<size;i++){
    m[arr[i]] = i;
  }

  for(int i = 0;i<size;i++){
    if(arr[i] != sorted[i]){
      swap++;

      int s = arr[m[sorted[i]]];

      temp = arr[i];
      arr[i] = arr[s];
      arr[s] = temp;

      m[arr[i]] = m[sorted[i]];
      m[s] = i;

    }
  }

  return swap;
}

void f(){
  int n;
  cin>>n;
  int arr[n], sorted[n];
  for(int i = 0;i<n;i++){
    cin>>arr[i];
    sorted[i] = arr[i];
  }

  sort(sorted, sorted+n);
  int res1 = minimumSwap(arr, sorted, n);

  reverse(sorted, sorted+n);
  int res2 = minimumSwap(arr, sorted, n);

  cout<<min(res1, res2)<<"\n";

}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
  #endif

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}