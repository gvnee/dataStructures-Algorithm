#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  int a[n], b[n];
  for(int i = 0;i<n;i++) cin>>a[i];
  for(int i = 0;i<n;i++) cin>>b[i];
  int start = 0, end = n-1;
  for(int i = 0;i<n;i++){
    if(a[i] != b[i]){
      start = i;
      break;
    }
  }
  for(int i = n-1;i>=0;i--){
    if(a[i] != b[i]){
      end = i;
      break;
    }
  }
  int resStart = start, resEnd = end;
  for(int i = start-1;i>=0;i--){
    if(b[i] <= b[i+1]) resStart = i;
    else break;
  }
  for(int i = end+1;i<n;i++){
    if(b[i] >= b[i-1]) resEnd = i;
    else break;
  }
  cout<<resStart+1<<' '<<resEnd+1<<"\n";
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}