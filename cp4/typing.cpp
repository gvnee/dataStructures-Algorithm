#include<bits/stdc++.h>
using namespace std;

#define LSOne(S) ((S) & -(S))

int N;
double dist[20][20], memo[1<<16];

double dp(int mask){
  double &ans = memo[mask];
  if(ans > -0.5) return ans;
  if(mask == 0) return 0;
  ans = 1e9;
  int two_pow_p1 = LSOne(mask);
  int p1 = __builtin_ctz(two_pow_p1);
  int m = mask-two_pow_p1;
  while(m){
    int two_pow_p2 = LSOne(m);
    int p2 = __builtin_ctz(two_pow_p2);
    ans = min(ans, dist[p1][p2] + dp(mask^two_pow_p1^two_pow_p2));
    m -= two_pow_p2;
  }
  return ans;
}

int main(){
  int caseNo = 0, x[20], y[20];
  while(scanf("%*s %d %d", &x[i], &y[i])){
    
  }
}