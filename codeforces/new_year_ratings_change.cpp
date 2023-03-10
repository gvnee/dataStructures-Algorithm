#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool comp(pair<int, int> a, pair<int, int> b){
  return a.second < b.second;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  int n;
  cin>>n;
  pair<int, int> arr[n];
  int temp;
  for(int i = 0;i<n;i++){
    cin>>temp;
    arr[i] = {temp, i};
  }
  sort(arr, arr+n);

  int cur = arr[0].first;
  for(int i = 1;i<n;i++){
    if(arr[i].first <= cur){
      arr[i].first = cur+1;
      cur++;
    }
    else cur = arr[i].first;
  }
  sort(arr, arr+n, comp);
  for(int i = 0;i<n;i++)
    cout<<arr[i].first<<" \n"[i==n-1];
  return 0;
}