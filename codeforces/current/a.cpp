#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    if(n%2==1) cout<<n/2+1<<"\n";
    else cout<<n/2<<"\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    int n;
    cin>>n;
    while(n--) solve();
    

    return 0;
}