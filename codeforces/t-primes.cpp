#include<bits/stdc++.h>
using namespace std;

const int lim = 1000001;

set<long long> prime_squares(){
  static bool arr[lim];
  for(int i = 2;i*i<lim;i++)
    if(!arr[i])
      for(int j = i*i;j<lim;j+=i)
        arr[j] = true;
  set<long long> res;
  for(int i = 2;i<lim;i++){
    if(!arr[i]) res.insert((long long) i*i);
  }
  return res;
}

void solve(){

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    set<long long> sq(prime_squares());
    int t;
    cin>>t;
    while(t--){
      long long x;
      cin>>x;
      if(sq.find(x) != sq.end())
        cout<<"YES\n";
      else cout<<"NO\n";
    }

    return 0;
}