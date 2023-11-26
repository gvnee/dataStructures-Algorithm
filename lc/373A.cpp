#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

bool areSimilar(vector<vector<int>>& a, int k){
  vector<vector<int>> b = a;
  int l = sz(a[0]);
  k %= l;
  for(int i = 0;i<sz(a);i+=2){
    rotate(a[i].begin(), a[i].begin()+k, a[i].end());
  }
  for(int i = 1;i<sz(a);i+=2){
    rotate(a[i].rbegin(), a[i].rbegin()+k, a[i].rend());
  }
  return a==b;
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  areSimilar();
  return 0;
}