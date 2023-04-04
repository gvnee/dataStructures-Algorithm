#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

int arr[10][20];
bool find(int a, int b, int n, int k){
  int cur = 0;
  for(int i = 0;i<n;i++){
    for(int j = 0;j<k;j++){
      if(arr[i][j] == a){
        cur++;
        break;
      }
      else if(arr[i][j] == b){
        cur--;
        break;
      }
    }
  }
  if(cur == n || cur == -n) return true;
  else return false;
}

void f(){
  int n, k;
  cin>>n>>k;
  for(int i = 0;i<n;i++)
    for(int j = 0;j<k;j++)
      cin>>arr[i][j];
  
  int res = 0;
  for(int i = 1;i<=k;i++){
    for(int j = i+1;j<=k;j++){
      res+=find(i, j, n, k);
    }
  }
  cout<<res<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  freopen("gymnastics.in", "r", stdin);
  freopen("gymnastics.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}