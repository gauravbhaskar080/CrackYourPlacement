#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

bool isPossible(long long a[], long long b[], int n, long long k){
    // Your code goes here
    sort(a, a + n);
    sort(b, b + n, greater<long long>());
    for (int i = 0; i < n; i++){
        if (a[i] + b[i] < k) return false;
    }
    return true;
}

int main(){
    int n=3;
    long long a[] = {1, 2, 3};
    long long b[] = {4, 5, 6};
    long long k = 7;
    if(isPossible(a, b, n, k)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}