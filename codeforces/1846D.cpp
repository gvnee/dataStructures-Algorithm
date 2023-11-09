#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

double area(double b, double h){
  return b * h / 2;
}

void f(){
  int n, b;
  double h, res = 0;
  cin>>n>>b>>h;
  int a[n];
  double x = area(b, h);
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  for(int i = 0;i<n-1;i++){
    if(a[i] + h < a[i+1]){
      res += x;
      continue;
    }
    double sh = a[i] + h - a[i+1];
    double ratio = sh / h;
    double sb = ratio*b;
    res += x - area(sh, sb);
  }
  res += x;
  printf("%.6f\n", res);
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}