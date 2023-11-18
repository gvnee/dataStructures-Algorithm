#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sz(x) int((x).size())
#define pb push_back

pair<int, int> qs[100005];
array<int, 3> updates[100005];
ll da[400005];
ll interval_value[400005];
ll prefix_sums[400005];
int width[400005];

vector<int> indices;


int getCompressedIndex(int a){
  return lower_bound(indices.begin(), indices.end(), a) - indices.begin();
}

void f(){
  int n, q;
  cin>>n>>q;
  int l, r, v;
  for(int i = 0;i<n;i++){
    cin>>l>>r>>v;
    indices.pb(l);
    indices.pb(r);
    updates[i] = {l, r, v};
  }
  for(int i = 0;i<q;i++){
    cin>>l>>r;
    indices.pb(l);
    indices.pb(r);
    qs[i] = {l, r};
  }

  // sort and remove duplicates
  sort(indices.begin(), indices.end());
  indices.erase(unique(indices.begin(), indices.end()), indices.end());
  
  for(int i = 0;i<n;i++){
    auto a = updates[i];

    da[getCompressedIndex(a[0]) + 1] += a[2];
    da[getCompressedIndex(a[1]) + 1] -= a[2];
  }

  for(int i = 0;i<sz(indices)-1;i++){
    width[i+1] = indices[i+1] - indices[i];
  }

  for(int i = 1;i<sz(indices);i++){
    interval_value[i] = interval_value[i-1] + da[i];
  }

  for(int i = 1;i<sz(indices);i++){
    prefix_sums[i] = prefix_sums[i-1] + interval_value[i] * width[i];
  }

  for(int i = 0;i<q;i++){
    cout<<prefix_sums[getCompressedIndex(qs[i].second)] - prefix_sums[getCompressedIndex(qs[i].first)]<<"\n";
  }
}

int main(){
  cin.tie(0); ios_base::sync_with_stdio(0);
  int t = 1;
  // cin>>t;
  while(t--) f();
  return 0;
}