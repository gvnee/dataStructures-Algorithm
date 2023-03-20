#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

int freq[7501] = {};

int getMissing(){
  for(int i = 1;i<7501;i++){
    if(freq[i] <= 0) return i;
  }
}

void f(){
  vector<int> v;

  while(scanf("%d", &temp) != EOF){
    v.push_back(temp);
    freq[temp]++;
  }

  int mx = temp;
  
  vector<int> adjList[mx+1];
  for(int i = 0;i<v.size();i++){

    int missing = getMissing();
    
    adjList[v[i]].push_back(missing);
    adjList[missing].push_back(v[i]);
    freq[missing]++;
    freq[v[i]]--;
  }
  for(int i = 1;i<mx+1;i++){
    cout<<i<<": ";
    sort(adjList[i].begin(), adjList[i].end());
    for(auto it:adjList[i]){
      cout<<it<<" ";
    }
    cout<<"\n";
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