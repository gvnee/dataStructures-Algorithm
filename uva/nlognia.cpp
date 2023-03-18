#include<bits/stdc++.h>
using namespace std;

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  // freopen("input.in", "r", stdin);
  long long t;
  int a, b, q, p;
  while(true){
    cin>>t;
    if(t == 0) return 0;
    cin>>q>>p;
    for(int i = 0;i<t;i++){
      cin>>a>>b;
      if(a == q || b == p) cout<<"divisa\n";
      else if(a>q && b>p) cout<<"NE\n";
      else if(a<q && b<p) cout<<"SO\n";
      else if(a>q && b<p) cout<<"SE\n";
      else cout<<"NO\n";
    }

  }
  
  return 0;
}