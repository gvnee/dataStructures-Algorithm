#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n, m;
  cin>>m;
  vector<int> arr[m];
  int freq[50001] = {};
  for(int i = 0;i<m;i++){
    cin>>n;
    for(int j = 0;j<n;j++){
      cin>>temp;
      arr[i].push_back(temp);
      freq[arr[i][j]]++;
    }
  }
  vector<int> res;
  for(int i = 0;i<m;i++){
    bool found = false;
    for(int j = 0;j<arr[i].size();j++){
      freq[arr[i][j]]--;
      if(!found && freq[arr[i][j]] <= 0){
        res.push_back(arr[i][j]);
        found = true;
      }
    }
    if(!found){
      cout<<"-1\n";
      return;
    }
  }
  for(auto it:res) cout<<it<<" ";
  cout<<"\n";
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