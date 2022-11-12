#include<bits/stdc++.h>
using namespace std;

int calcMin(vector<long long> v){
    if(v.empty()) return 0;
    sort(v.begin(), v.end());
    return v[0];
}

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<long long> v(n);
    for(auto& e:v) cin>>e;
    vector<long long> seg(n);
    long long res = 0;

    for(int i = 0;i<n;i++){
        if(s[i] == '1'){
            res += v[i];
            seg.push_back(v[i]);
        }
        else if(s[i+1] == '1'){
            res -= calcMin(seg);
            seg.clear();
            res += v[i];
            seg.push_back(v[i]);
        }
        else{
            res -= calcMin(seg);
            seg.clear();
        }
    }
    res -= calcMin(seg);
    seg.clear();
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