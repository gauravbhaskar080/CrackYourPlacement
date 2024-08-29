#include <bits/stdc++.h>
using namespace std;

int characterReplacement(string s, int k)
{
    int n = s.size();
    vector<int> count(26);
    int maxCount = 0;
    int i = 0;
    int j = 0;
    int ans = 0;
    while (j < n)
    {
        count[s[j] - 'A']++;
        maxCount = max(maxCount, count[s[j] - 'A']);
        if (j - i + 1 - maxCount > k)
        {
            count[s[i] - 'A']--;
            i++;
        }
        ans = max(ans, j - i + 1);
        j++;
    }
    return ans;
}

int main()
{
    string s = "ABAB";
    int k = 2;
    cout << characterReplacement(s, k) << endl;
    return 0;
}
