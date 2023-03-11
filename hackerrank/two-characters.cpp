#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  int n;
  cin>>n;
  vector<char> str;
  unordered_set<char> se;
  char a;
  for(int i = 0;i<n;i++){
    cin>>a;
    str.push_back(a);
    se.insert(a);
  }
  int res = 0;
  for(auto it:se){
    for(auto it2:se){
      
    }
  }
  return 0;
}