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
  int h, w; cin>>h>>w;
  vector<vector<int>> a(h, vector<int> (w));
  vector<vector<int>> b(h, vector<int> (w));

  for(int i = 0;i<h;i++){
    for(int j = 0;j<w;j++){
      cin>>a[i][j];
    }
  }
  for(int i = 0;i<h;i++){
    for(int j = 0;j<w;j++){
      cin>>b[i][j];
    }
  }

  int res = INT_MAX;
  vector<int> p(h), q(w);
  for(int i = 0;i<h;i++) p[i] = i;
  for(int i = 0;i<w;i++) q[i] = i;
  do{
    do{
      bool same = true;
      for(int i = 0;i<h;i++){
        for(int j = 0;j<w;j++){
          if(a[p[i]][q[j]] != b[i][j]) same = false;
        }
      }

      if(same){

        int inv = 0;

        for(int i = 1;i<h;i++){
          for(int j = 0;j<i;j++){
            if(p[i] < p[j]) inv++;
          }
        }
        for(int i = 1;i<w;i++){
          for(int j = 0;j<i;j++){
            if(q[i] < q[j]) inv++;
          }
        }

        res = min(res, inv);
      }
      
    }while(next_permutation(all(q)));
  }while(next_permutation(all(p)));
  
  if(res == INT_MAX) cout<<"-1\n";
  else cout<<res<<"\n";
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}