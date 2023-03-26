  #include <bits/stdc++.h>
  using namespace std;

  #define ll long long
  #define debug(x) cerr<<#x<<": "<<(x)<<"\n"

  const int MOD = int(1e9) + 7;
  double PI = atan(1)*4;
  int temp;
  vector<ll> sorted;

  void remove(ll a){
    int index = lower_bound(sorted.begin(), sorted.end(), a) - sorted.begin();
    sorted.erase(sorted.begin() + index);
    // int l = 0;
    // int r = sorted.size() - 1;
    // while(l < r){
    //   int mid = l + (r-l)/2;
    //   vector<ll>::iterator it = sorted.begin() + mid;
    //   if(a == sorted[mid]){
    //     sorted.erase(it);
    //     return;
    //   }
    //   else if(a > sorted[mid]){
    //     l = mid;
    //   }
    //   else r = mid;
    // }
  }

  int countLarger(ll a){
    int l = 0;
    int r = sorted.size() - 1;
    int mid;
    while(l < r){
      mid = l + (r-l)/2;
      if(sorted[mid]>a){
        r = mid;
      }
      else l = mid+1;
    }
    if(l == r && a > sorted[l]) return 0;
    else return sorted.size() - l;
  }

  void f(){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i = 0;i<n;i++){
      cin>>arr[i];
      sorted.push_back(arr[i]);
    }
    sort(sorted.begin(), sorted.end());
    for(ll i = 0;i<n;i++){
      remove(arr[i]);
      cout<<countLarger(arr[i])<<' ';
    }
  }

  int main(){
    
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    #ifndef ONLINE_JUDGE
      freopen("input.in", "r", stdin);
    #endif

    int t = 1;
    // cin>>t;
    while(t--) f();
    
    return 0;
  }