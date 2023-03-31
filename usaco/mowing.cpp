#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) int((x).size())
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  int n;
  cin>>n;
  char c;
  int a;
  int curTime = 0;
  pair<int, int> curPos = {1500, 1500};
  int arr[3000][3000] = {};
  int res = INT_MAX;
  for(int i = 0;i<n;i++){
    cin>>c>>a;
    for(int j = a;j>0;j--){
      curTime++;
      if(c == 'N') curPos.first++;
      if(c == 'E') curPos.second++;
      if(c == 'S') curPos.first--;
      if(c == 'W') curPos.second--;
      if(arr[curPos.first][curPos.second] != 0){
        res = min(res, curTime - arr[curPos.first][curPos.second]);
      }
      arr[curPos.first][curPos.second] = curTime;
    }
  }
  if(res == INT_MAX) cout<<-1<<"\n";
  else cout<<res<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  freopen("mowing.in", "r", stdin);
  freopen("mowing.out", "w", stdout);
  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}