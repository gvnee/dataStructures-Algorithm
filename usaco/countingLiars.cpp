#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n;
  cin>>n;
  vector<pair<int, char>> v(n);
  int l = 0;
  for(int i = 0;i<n;i++){
    char c;
    int a;
    cin>>c>>a;
    v[i] = {a, c};
    if(c == 'L') l++;
  }
  sort(v.begin(), v.end());
  int res = INT_MAX;
  int cur = n - l;
  for(auto it:v){
    if(it.second == 'G'){
      cur--;
      res = min(res, cur);
    }
    else{
      res = min(res, cur);
      cur++;
    }
  }

  cout<<res<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}