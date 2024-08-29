#include<bits/stdc++.h>
using namespace std;

int getMax(vector<int>& arr){
    int maxE = INT_MIN;
    for(int i=0; i<arr.size(); i++){
        maxE = max(maxE, arr[i]);
    }
    return maxE;
}

void countSort(vector<int>& arr, int n, int exp){
    vector<int> output(n);
    int i, count[10] = {0};

    // Store count of occurrences
    // in count[]
    for(i=0; i<n; i++){
        count[(arr[i]/exp)%10]++;
    }

}

int main(){
    return 0;
}