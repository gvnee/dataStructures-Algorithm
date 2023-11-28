#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

bool comp(pi a, pi b){
  return a.S < b.S;
}

vector<int> f(vector<int>& nums, int limit){
  vector<pi> a, emptyVector;

  for(int i = 0;i<sz(nums);i++){
    a.pb({nums[i], i});
  }
  
  sort(all(a));
  vector<vector<pi>> v = {emptyVector};

  int pre = a[0].F;
  for(auto x:a){
    if(x.F - pre > limit) v.pb(emptyVector);
    v.back().pb(x);
    pre = x.F;
  }

  for(auto x:v){
    vector<pi> temp = x;
    sort(all(temp), comp);
    int cur = 0;
    for(auto u:x){
      nums[temp[cur].S] = u.F;
      cur++;
    }
  }
  return nums;
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int n, l; cin>>n>>l;
  vector<int> a(n);
  for(int &x:a) cin>>x;
  f(a, l);
  return 0;
}