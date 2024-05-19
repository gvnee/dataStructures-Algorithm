#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

void f(){
  int n, q;
  cin>>n>>q;
  ll row[n+1], col[n+1]; 
  for(int i = 1;i<=n;i++){
    ll r = 0;
    for(int j = 1;j<=n;j++){
      // cout<<i + j<<" ";
      r += i + j;
    }
    row[i] = r;
    col[i] = r;
    // cout<<" = "<<r<<"\n";
  }
  int r = 0, c = 0;
  ll rowDel = 0, colDel = 0;
  bool rowZero[n+1] = {};
  bool colZero[n+1] = {};
  while(q--){
    char op; int t;
    cin>>op>>t;
    if(op == 'R'){
      if(rowZero[t]) cout<<0<<"\n";
      else{
        cout<<row[t] - colDel - t * c<<"\n";
        rowZero[t] = true;
        r++;
        rowDel += t;
      }
    }
    else{
      if(colZero[t]) cout<<0<<"\n";
      else{
        cout<<col[t] - rowDel - t * r<<"\n";
        colZero[t] = true;
        c++;
        colDel += t;
      }
    }
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}