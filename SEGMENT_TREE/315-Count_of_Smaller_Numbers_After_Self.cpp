#include <bits/stdc++.h>
using namespace std;

void merge(vector<pair<int, int>> &nums, int low, int mid, int high, int n, vector<int> &count)
{
    int i = low, j = mid + 1;
    vector<pair<int, int>> temp;
    int right = mid + 1;

    // the counting should be performed before merging the arrays
    for (int left = low; left <= mid; left++)
    {
        while (right <= high && nums[left].first > nums[right].first)
        {
            right++;
        }
        count[nums[left].second] += (right - (mid + 1));
    }

    while (i <= mid && j <= high)
    {
        if (nums[i].first <= nums[j].first)
        {
            temp.push_back(nums[i]);
            i++;
        }
        else
        {
            temp.push_back(nums[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        temp.push_back(nums[i]);
        i++;
    }
    while (j <= high)
    {
        temp.push_back(nums[j]);
        j++;
    }

    // copy the sorted array in to original array
    int k = 0;
    for (int i = low; i <= high; i++)
    {
        nums[i] = temp[k++];
    }
}

void mergeSort(vector<pair<int, int>> &nums, int l, int h, int n, vector<int> &count)
{
    if (l >= h)
    {
        return;
    }
    int mid = l + (h - l) / 2;
    mergeSort(nums, l, mid, n, count);
    mergeSort(nums, mid + 1, h, n, count);
    merge(nums, l, mid, h, n, count);
}

vector<int> countSmaller(vector<int> &arr)
{
    int n = arr.size();
    vector<int> count(n, 0);
    vector<pair<int, int>> nums;
    for (int i = 0; i < n; i++)
    {
        nums.push_back({arr[i], i});
    }
    mergeSort(nums, 0, n - 1, n, count);
    return count;
}

int main()
{
    vector<int> arr = {5, 2, 6, 1};
    vector<int> result = countSmaller(arr);
    for (int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}
