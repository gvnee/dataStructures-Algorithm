#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

struct st{
  int day;
  string name;
  string amount;
};

bool cmp(st a, st b){
  return a.day > b.day;
}

void f(){
  int n;
  cin>>n;
  int day;
  string name;
  string amount;
  vector<st> v;
  unordered_map<string, int> m;
  m["Mildred"] = 7;
  m["Elsie"] = 7;
  m["Bessie"] = 7;

  for(int i = 0;i<n;i++){
    cin>>day>>name>>amount;
    st a;
    a.day = day;
    a.name = name;
    a.amount = amount;
    v.push_back(a);
  }
  sort(v.begin(), v.end(), cmp);
  int res = 0;
  int prevBest = 7;
  int curBest = 7;
  int bestCount = 1;
  unordered_map<string, int> prev;
  prev["Mildred"] = 7;
  prev["Elsie"] = 7;
  prev["Bessie"] = 7;
  for(st it:v){
    if(it.amount[0] == '-'){
      prev[it.name] = m[it.name];
      m[it.name] -= stoi(it.amount.substr(1));
    }
    else{
      prev[it.name] = m[it.name];
      m[it.name] += stoi(it.amount.substr(1));
      if(m[it.name] > prevBest) curBest = m[it.name];
    }
    for(auto x:prev){
      if(prev[x.first] != x.second && (prev[x.first] == prevBest || ))
    }
  }
  cout<<res<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  // freopen("measurement.in", "r", stdin);
  // freopen("measurement.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}