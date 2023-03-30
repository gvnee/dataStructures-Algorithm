#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;

struct st{
  int t;
  int b;
  bool use;
};

bool cmp(st a, st b){
  return a.t < b.t;
}

void f(){
  int n;
  cin>>n;
  vector<st> v;
  for(int i = 0;i<n;i++){
    int a, b, c;
    cin>>a>>b>>c;
    st temp = {a, c, true};
    v.push_back(temp);
    temp = {b, c, false};
    v.push_back(temp);
  }
  sort(v.begin(), v.end(), cmp);
  int freeBuckets = 0;
  int res = 0;
  for(auto it:v){
    if(it.use){
      if(it.b > freeBuckets){
        res += it.b - freeBuckets;
        freeBuckets = 0;
      }
      else{
        freeBuckets -= it.b;
      }
    }
    else{
      freeBuckets += it.b;
    }
  }
  cout<<res<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  freopen("blist.in", "r", stdin);
  freopen("blist.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}