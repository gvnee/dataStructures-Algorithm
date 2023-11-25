#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

int a[100];


void f(){
  int n;
  cin>>n;
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  bool sorted = true;
  for(int i = 1;i<n;i++){
    if(a[i] < a[i-1]){
      sorted = false;
    }
  }
  if(sorted){
    cout<<"YES\n";
    return;
  }
  
  if(a[0] > a[1]){
    cout<<"NO\n";
    return;
  }


  for(int j = 0;j<10;j++){
    for(int i = 1;i<n-1;i++){
      if(a[i]>a[i+1]){
        if(a[i]>a[i-1]){
          swap(a[i], a[i+1]);
        }
        else{
          
          cout<<"NO\n";
          return;
        }
      }
    }
  }

  for(int i = 1;i<n;i++){
    if(a[i] < a[i-1]){
      cout<<"NO\n";

      return;
    }
  }
  
  cout<<"YES\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}