#include <bits/stdc++.h>
using namespace std;

class NumArray {
public:
    vector<int>v; 
    int sum; 
    NumArray(vector<int>& nums) {
        v=nums;
        sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
    }
    
    void update(int index, int val) {
        sum-=v[index];     
        v[index]=val;
        sum+=val;
        
    }
    
    int sumRange(int left, int right) {
        int res=sum; 
        for(int i=0;i<left;i++){    
            res-=v[i];
        }
        for(int i=right+1;i<v.size();i++){
            res-=v[i];
        }
        return res;
    }
};

int main()
{
    vector<string> inputs = {"NumArray", "sumRange", "sumRange", "sumRange"};
    vector<vector<int>> arr = {{{1, 3, 5}}, {0, 2}, {1, 2}, {0, 2}};

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
