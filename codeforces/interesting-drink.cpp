//different ways to solve this problem
//binary search (most efficient)
//array prefix sum
//using standart library upper_bound

#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& shops, int coin){
    int left = 0;
    int right = shops.size();
    int current;
    while(left<right){
        current = (right-left)/2 + left;
        if(shops.at(current) <= coin){
            left = current + 1;
        }
        else{
            right = current;
        }
    }
    return left;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    
    int shopCount;
    vector<int> shops;
    cin>>shopCount;
    int price;
    for(int i = 0;i<shopCount;i++){
        cin>>price;
        shops.push_back(price);
    }
    sort(shops.begin(), shops.end());

    int days;
    cin>>days;
    int coin;
    int result;
    for(int i = 0;i<days;i++){
        cin>>coin;
        result = binarySearch(shops, coin);
        cout<<result<<"\n";
    }

    // for(int n : shops){
    //     cout<<n<<"\n";
    // }

    return 0;
}