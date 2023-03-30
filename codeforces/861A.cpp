#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

int findDif(int a){
  int mn = 9;
  int mx = 0;
  while(a>0){
    int cur = a%10;
    mn = min(mn, cur);
    mx = max(mx, cur);
    a /= 10;
  }
  return mx - mn;
}

const int K = 17;
const int MxN = 1000005;

int st[MxN][K];

int query(int L, int R){
  int length = R-L+1;
  int k = 0;
  while((1<<(k+1))<=length){
    k++;
  }
  return max(st[L][K], st[R-(1<<k)+1][k]);
}

void preprocess(){
  for(int i = 1;i<=MxN;i++){
    findDif(i);
    st[i][0] = findDif(i);
  }
  for(int k = 1;k<K;k++){
    for(int i = 0;i+(1 << k) - 1 < MxN;i++){
      st[i][k] = max(st[i][k-1], st[i+(1<<(k-1))][k-1]);
    }
  }
}

void f(){
  int l, r;
  cin>>l>>r;
  cout<<query(l, r)<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  int t = 1;
  cin>>t;
  preprocess();
  while(t--) f();
  
  return 0;
}