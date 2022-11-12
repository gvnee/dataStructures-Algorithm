#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int x;
    for(int i = 0;i<n;i++) cin>>x;
    n = 10 - n;
    n = n*(n-1)/2;
    cout<<n*6<<"\n";
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