#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

void f(){
  int n, q;
  cin>>n>>q;
  int a[i];
  int one = 0, two = 0;
  for(int i = 0;i<n;i++){
    cin>>a[i];
    if(a[i] == 1) one++;
    else two++;
  }
  while(q--){
    int op;
    cin>>op;
    if(op == 1){
      ll s;
      cin>>s;
      
    }
    else{
      int i, v;
      cin>>i>>v;
      if(v == 1){
        if(a[i] != 1) one++, two--;
      }
      else if(a[i] != 2) two++, one--;
    }
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}