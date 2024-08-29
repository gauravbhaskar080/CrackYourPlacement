#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int start, int end) {
    while (start < end) {
        if (s[start++] != s[end--])
            return false;
    }
    return true;
}

void allPalindromicPartitionsUtil(int start, string &S, vector<string> &currentPartition, vector<vector<string>> &result) {
    if (start >= S.length()) {
        result.push_back(currentPartition);
        return;
    }
    
    for (int i = start; i < S.length(); i++) {
        if (isPalindrome(S, start, i)) {
            currentPartition.push_back(S.substr(start, i - start + 1));
            allPalindromicPartitionsUtil(i + 1, S, currentPartition, result);
            currentPartition.pop_back();
        }
    }
}

vector<vector<string>> allPalindromicPerms(string S) {
    vector<vector<string>> result;
    vector<string> currentPartition;
    allPalindromicPartitionsUtil(0, S, currentPartition, result);
    return result;
}

int main() {
    string str = "geeks";
    vector<vector<string>> ans = allPalindromicPerms(str);
    for (auto &v : ans) {
        for (auto &s : v) cout << s << " ";
        cout << endl;
    }
    return 0;
}
