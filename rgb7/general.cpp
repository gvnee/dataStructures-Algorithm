#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
#define pi pair<int, int>
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  int n;
  cin>>n;
  int a[n];
  int mx = INT_MIN, mn = INT_MAX;
  int mxi = 0, mni = 0;
  for(int i = 0;i<n;i++){
    cin>>a[i];
    if(a[i] > mx){
      mx = a[i];
      mxi = i;
    }
    if(a[i] <= mn){
      mn = a[i];
      mni = i;
    }
  }
  if(mxi > mni) mni++;
  cout<<mxi + n - mni - 1;
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}