#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n;
  cin>>n;
  int a[100000];
  char b[100000];
  queue<int> U;
  queue<int> L;
  queue<int> D;
  queue<int> R;
  for(int i = 0;i<n;i++){
    cin>>a[i]>>b[i];
    if(b[i] == 'U') U.push(a[i]);
    else if(b[i] == 'R') R.push(a[i]);
    else if(b[i] == 'D') D.push(a[i]); 
    else L.push(a[i]);
  }
  while(!U.empty() || !L.empty() || !D.empty() || !R.empty()){
    
  }
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}