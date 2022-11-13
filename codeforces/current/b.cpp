#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    long long res = 0;
    for(int i = 0;i<n;i++){
        set<int> s;
        int arr[10010] = {0};
        int ma = -1;
        for(int j = i;j<n;j++){
            s.insert(str[j]);
            arr[str[j]]++;
            ma = max(ma, arr[str[j]]);
            if(ma<=s.size()) res++;
        }
    }
    cout<<res<<"\n";
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