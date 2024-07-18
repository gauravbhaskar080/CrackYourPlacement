#include <bits/stdc++.h>
using namespace std;

vector<long long int> productExceptSelf(vector<long long int> &nums, int n){
    if (n == 0) return {};

    vector<long long int> prefix(n, 1);
    vector<long long int> suffix(n, 1);
    vector<long long int> result(n, 1);

    // Compute prefix products
    for (int i = 1; i < n; ++i){
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    // Compute suffix products
    for (int i = n - 2; i >= 0; --i){
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }

    // Compute result by multiplying prefix and suffix products
    for (int i = 0; i < n; ++i){
        result[i] = prefix[i] * suffix[i];
    }
    return result;
}

int main(){
    vector<long long int> nums = {10, 3, 5, 6, 2};
    int n = nums.size();
    vector<long long int> result = productExceptSelf(nums, n);
    for (auto num : result) cout << num << " "; 
    return 0;
}
