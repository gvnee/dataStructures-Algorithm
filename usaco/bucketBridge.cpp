#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  string s;
  int lakeX, lakeY, barnX, barnY, rockX, rockY;
  for(int i = 0;i<10;i++){
    cin>>s;
    for(int j = 0;j<10;j++){
      if(s[j] == 'B'){
        barnX = i;
        barnY = j;
      }
      else if(s[j] == 'L'){
        lakeX = i;
        lakeY = j;
      }
      else if(s[j] == 'R'){
        rockX = i;
        rockY = j;
      }
    }
  }
  int cows = abs(barnX - lakeX) + abs(barnY - lakeY)-1;
  if(barnX == lakeX && rockX == barnX){
    if(rockY > barnY && rockY < lakeY || rockY < barnY && rockY > lakeY){
      cows+=2;
    }
  }
  else if(barnY == lakeY && rockY == barnY){
    if(rockX > barnX && rockX < lakeX || rockX < barnX && rockX > lakeX){
      cows+=2;
    }
  }
  cout<<cows<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);
  #endif

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}