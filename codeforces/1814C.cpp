#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

bool cmp(pair<int, int> a, pair<int, int> b){
  return a.first > b.first;
}

void f(){
  int n, s1, s2;
  cin>>n>>s1>>s2;
  vector<pair<int, int>> arr(n);
  int temp;
  for(int i = 0;i<n;i++){
    cin>>temp;
    arr[i] = {temp, i+1};
  }
  sort(arr.begin(), arr.end(), cmp);
  vector<int> a, b;
  for(int i = 0;i<n;i++){
    int index = arr[i].second;

    if((sz(a)+1) * s1 < (sz(b)+1) * s2){
      a.push_back(index);
    }
    else{
      b.push_back(index);
    }
  }
  cout<<sz(a);
  for(int i:a) cout<<' '<<i;
  cout<<"\n";
  cout<<sz(b);
  for(int i:b) cout<<' '<<i;
  cout<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(0); cin.tie(0);

  int t = 1;
  cin>>t;
  while(t--) f();
  
  return 0;
}