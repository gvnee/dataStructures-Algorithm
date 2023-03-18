#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n;
  cin>>n;
  string s;
  cin>>s;

  unordered_map<char, int> right;
  for(auto i:s){
    if(!right.count(i)) right[i] = 1;
    else right[i]++;
  }
  unordered_map<char, int> left;
  int mx = right.size();

  int leftSize = 0;
  int rightSize = right.size();

  for(auto i:s){
    if(!left.count(i)){
      left[i] = 1;
      leftSize++;
    }
    right[i]--;
    if(right[i] == 0){
      rightSize--;
    }
    mx = max(mx, leftSize + rightSize);
  }
  cout<<mx<<"\n";
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