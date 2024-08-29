#include<bits/stdc++.h>
using namespace std;


int minMoves2(vector<int>& nums) {
    int n = nums.size(),count = 0;
    sort(nums.begin(),nums.end());
    int mid = nums[n/2];
    for(int i=0;i<n;i++){
        count += abs(mid-nums[i]);         
    }
    return count;
}
int main() {
    vector<int> nums = {1,10,2,9};
    cout << minMoves2(nums) << endl; 
    return 0;
}