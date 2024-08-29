#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> uniquePerms(int n, vector<int> &arr){
    sort(arr.begin(),arr.end());
    vector<vector<int>> res;
    res.push_back(arr);
    while(next_permutation(arr.begin(),arr.end())){
        res.push_back(arr);
    }
    return res;
}
int main(){
    vector<int> arr = {1,2,1};
    int n = arr.size();
    vector<vector<int>> ans = uniquePerms(n,arr);
    for(auto &v : ans){
        for(auto &i : v)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}