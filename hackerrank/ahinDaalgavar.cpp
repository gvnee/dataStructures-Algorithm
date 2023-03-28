#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define debug(x) cerr<<#x<<": "<<(x)<<"\n"

const int MOD = int(1e9) + 7;
double PI = atan(1)*4;
int temp;

void f(){
  string a, b;
  cin>>a>>b;
  int n;
  cin>>n;
  int x, y, carry = 0;
  string res = "";
  int p1 = a.size()-1;
  int p2 = b.size()-1;
  while(p1>=0  || p2>=0){
    x = 0;
    y = 0;
    if(p1>=0) x = (int) a[p1] - '0';
    if(p2>=0) y = (int) b[p2] - '0';
    p1--;
    p2--;
    if(x + y + carry>= 10){
      res += to_string(x+y+carry-10);
      carry = 1;
    }
    else{
      res += to_string(x+y+carry);
      carry = 0;
    }
  }
  if(carry) res += '1';
  for(int i = 0;i<n;i++){
    for(int j = res.size()-1;j>=0;j--){
      cout<<res[j];
    }
    cout<<"\n";
  }
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}