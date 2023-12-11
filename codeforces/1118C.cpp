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
  int n; cin>>n;
  int a[1001] = {};
  vector<pi> v;
  for(int i = 0;i<n*n;i++){
    int t; cin>>t;
    a[t]++;
  }
  int cur = 1;
  bool odd = n%2;
  int res[n][n];
  if(odd){
    int b = 0;
    for(int i = 1;i<=1000;i++){
      if(a[i] % 2){
        if(b){
          cout<<"NO\n";
          return;
        }
        b = i;
        a[i]--;
      }
    }
    res[n/2][n/2] = b;

    queue<int> two, four;
    int fuck = n/2;
    int requiredFour = fuck*fuck;
    for(int i = 1;i<=1000;i++){
      while(a[i] >= 4 && sz(four) < requiredFour){
        four.push(i);
        a[i]-=4;
      }
      while(a[i] >= 2){
        two.push(i);
        a[i]-=2;
      }
      if(a[i]){
        cout<<"NO\n";
        return;
      }
    }

    if(sz(four) < requiredFour){
      cout<<"no\n";
      return;
    }

    for(int i = 0;i<n/2;i++){
      for(int j = 0;j<n/2;j++){
        cur = four.front();
        four.pop();
        res[i][j] = cur;
        res[i][n-j-1] = cur;
        res[n-i-1][j] = cur;
        res[n-i-1][n-j-1] = cur;
      }
    }

    for(int i = 0;i<n/2;i++){
      cur = two.front();
      two.pop();
      res[i][n/2] = cur;
      res[n-i-1][n/2] = cur;
    }

    for(int i = 0;i<n/2;i++){
      cur = two.front();
      two.pop();
      res[n/2][i] = cur;
      res[n/2][n-i-1] = cur;
    }
  }
  else{

    for(int i = 1;i<=1000;i++){
      if(a[i] % 4){
        cout<<"NO\n";
        return;
      }
    }
    
    for(int i = 0;i<n/2;i++){
      for(int j = 0;j<n/2;j++){
        while(a[cur] == 0) cur++;
        res[i][j] = cur;
        res[i][n-j-1] = cur;
        res[n-i-1][j] = cur;
        res[n-i-1][n-j-1] = cur;
        a[cur] -= 4;
      }
    }
  }
  cout<<"YES\n";
  for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
      cout<<res[i][j]<<" ";
    }
    cout<<"\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}