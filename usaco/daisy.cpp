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
  int arr[n];
  int res = n;
  for(int i = 0;i<n;i++) cin>>arr[i];
  for(int i = 0;i<n;i++){
    for(int j = i+1;j<n;j++){
      int sum = 0;
      for(int k = i;k<=j;k++){
        sum+=arr[k];
      }
      int average = sum/(j-i+1);
      if(sum%(j-i+1) == 0){
        for(int k = i;k<=j;k++){
          if(average == arr[k]){
            res++;
            break;
          }
        }
      }
    }
  }
  cout<<res<<"\n";
}

int main(){
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  int t = 1;
  // cin>>t;
  while(t--) f();
  
  return 0;
}