#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

const int MxN = 10000000;

int freq[MxN] = {};

int getMissing(){
  for(int i = 1;i<MxN;i++){
    if(freq[i] <= 0) return i;
  }
}

void f(){
  vector<int> v;

  int n;
  cin>>n;
  for(int i = 0;i<n-2;i++){
    cin>>temp;
    v.push_back(temp);
    freq[temp]++;
  }
  
  vector<int> adjList[n+1];
  for(int i = 0;i<n-1;i++){

    int missing = getMissing();
    
    // adjList[v[i]].push_back(missing);
    adjList[missing].push_back(v[i]);
    freq[missing]++;
    freq[v[i]]--;
  }

  for(int i = 1;i<=n;i++){
    for(auto it:adjList[i]){
      cout<<i<<' '<<it<<"\n";
    }
  }
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