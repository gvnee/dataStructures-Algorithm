#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    cout<<1;
    for(int i = n;i>=2;i--) cout<<" "<<i;
    cout<<"\n";
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