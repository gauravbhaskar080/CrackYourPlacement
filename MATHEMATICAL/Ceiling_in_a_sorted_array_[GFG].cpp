#include<bits/stdc++.h>
using namespace std;

int ceilSearch(vector<int>& arr, int low, int high, int x){
    if (sizeof(arr) / sizeof(arr[0]) == 0) return -1;
    while(low<=high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == x) return mid;
        if(arr[mid] < x) low = mid + 1;
        else high = mid - 1;        
    }
    return low;
}

int main() {
    vector<int> arr = {1, 2, 8, 10, 10, 12, 19};
    int x = 8;
    cout << arr[ceilSearch(arr, 0, arr.size() - 1, x)];
    return 0;
}