#include <bits/stdc++.h>
using namespace std;

int findPair(int n, int x, vector<int> &arr){
    // code here
    if (n < 2) return -1;
    unordered_set<int> st;
    for (int i = 0; i < n; i++){
        if ((st.find(arr[i] - x) != st.end()) || (st.find(arr[i] + x) != st.end())){
            return 1;
        }
        st.insert(arr[i]);
    }
    return -1;
}

int main(){
    int n = 6 , x = 78;
    vector<int> arr = {5, 20, 3, 2, 5, 80};
    int result = findPair(n, x, arr);
    cout << (result == 1? "Yes" : "No") << endl;
    return 0;
}