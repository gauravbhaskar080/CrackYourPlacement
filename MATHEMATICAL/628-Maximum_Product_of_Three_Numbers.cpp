#include<bits/stdc++.h>
using namespace std;

int maximumProduct(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int n = nums.size();
    return max(nums[n-1]*nums[n-2]*nums[n-3] , nums[0]*nums[1]*nums[n-1]);
}

int main(){
    vector<int> nums = {-100,-98,-1, 2, 3, 4};
    cout << maximumProduct(nums) << endl;
    return 0;
}