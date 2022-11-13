#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int div = 1;
    for(int i = 1;i<=n/2;i++){
        if(n%i==0) div++;
        if(div>3) break;
    }
    if(div == 3) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    int t;
    cin>>t;
    while(t--) solve();
    

    return 0;
}