#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

vector<int> findPeaks(vector<int>& mountain){
  vector<int> res;
  for(int i = 1;i<sz(mountain) - 1;i++){
    if(mountain[i] > mountain[i-1] && mountain[i] > mountain[i+1]){
      res.pb(i);
    }
  }
  return res;
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) findPeaks();
  return 0;
}