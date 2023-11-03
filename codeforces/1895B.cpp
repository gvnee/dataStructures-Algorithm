#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"
#define pb push_back

void f(){
  int n;
  cin>>n;
  int a[2*n];
  for(int i = 0;i<2*n;i++){
    cin>>a[i];
  }
  sort(a, a+2*n);
  int res = 0;
  int prevx = 0;
  int prevy = 0;
  for(int i = 0;i<n;i++){
    int x = a[i];
    int y = a[2 * n - i - 1];
    if(i != 0){
      res += abs(x - prevx) + abs(y - prevy);
    }
    prevx = x;
    prevy = y;
  }
  cout<<res<<"\n";
  for(int i = 0;i<n;i++){
    cout<<a[i]<<" ";
    cout<<a[2 * n - i - 1]<<"\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}