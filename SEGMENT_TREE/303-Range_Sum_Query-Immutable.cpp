#include <bits/stdc++.h>
using namespace std;

class NumArray
{
public:
    vector<int> ans;
    NumArray(vector<int> &nums)
    {
        ans = nums;
    }

    int sumRange(int left, int right)
    {
        int sum = 0;
        while (left <= right)
        {
            sum += ans[left];
            left++;
        }
        return sum;
    }
};

int main()
{
    vector<string> inputs = {"NumArray", "sumRange", "sumRange", "sumRange"};
    vector<vector<int>> arr = {{{-2, 0, 3, -5, 2, -1}}, {0, 2}, {2, 5}, {0, 5}};

    // Correctly initialize the NumArray object
    NumArray* numArray = new NumArray(arr[0]);

    for (int i = 1; i < inputs.size(); i++)
    {
        if (inputs[i] == "sumRange")
        {
            int left = arr[i][0];
            int right = arr[i][1];
            cout << numArray->sumRange(left, right) << endl;
        }
    }

    // Clean up memory
    delete numArray;

    return 0;
}
