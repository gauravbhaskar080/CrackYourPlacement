#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& a, vector<int>& b, int n, int k){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<int>());
    for(int i=0;i<n;i++){
        if(a[i]+ b[i] < k) return false;
    }
    return true;
}

int main() {
    vector<int> a = { 2, 1, 3 };
    vector<int> b = { 7, 8, 9 };
    int n = a.size();
    int k = 10;
    if(isPossible(a, b, n, k)) cout << "YES";
    else cout << "NO";
    return 0;
}