#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int((x).size())
typedef pair<int,int> pi;
typedef long long ll;
#define pb push_back
#define S second
#define F first

const int MXN = 2e5;
const int N = 1e5;
const int K = 25;
int lg[MXN+1];

void f(){
  int n; cin>>n;
  vector<int> a(MXN+1);

  for(int i = 1;i<=n;i++){
    cin>>a[i];
  }

  int st[K + 1][MXN + 1];
  int st2[K + 1][MXN + 1];

  for(int j = 1; j <= n; ++j){
      st[0][j] = a[j];
      st2[0][j] = a[j];
  }
  for (int i = 1; i <= K; i++)
      for (int j = 0; j + (1 << i) <= MXN; j++){
          st[i][j] = min(st[i - 1][j], st[i - 1][j + (1 << (i - 1))]);
          st2[i][j] = max(st2[i - 1][j], st2[i - 1][j + (1 << (i - 1))]);
      }
  
  int q; cin>>q;
  while(q--){
    int l, r; cin>>l>>r;
    int i = lg[r - l + 1];
    int minimum = min(st[i][l], st[i][r - (1<<i)+1]);
    int maximum = max(st2[i][l], st2[i][r - (1<<i)+1]);
    cout<<minimum<<" "<<maximum<<"\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);

  lg[1] = 0;
  for (int i = 2; i <= MXN; i++)
      lg[i] = lg[i/2] + 1;

  int t = 1;
  cin>>t;
  while(t--) f();
  return 0;
}