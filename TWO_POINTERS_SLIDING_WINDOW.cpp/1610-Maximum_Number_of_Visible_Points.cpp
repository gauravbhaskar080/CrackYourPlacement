#include <bits/stdc++.h>
using namespace std;

int visiblePoints(vector<vector<int>> &points, int angle, vector<int> &location)
{
    int n = points.size();
    int ans = 0;
    vector<double> angles;
    for (auto p : points)
    {
        if (p[0] == location[0] and p[1] == location[1])
        {
            ans++;
        }
        else
        {
            int dy = p[0] - location[0];
            int dx = p[1] - location[1];
            double angle = atan2(dy, dx);
            angle = angle * 180 / M_PI;
            angles.push_back(angle);
        }
    }
    sort(angles.begin(), angles.end());

    n = angles.size();
    for (int i = 0; i < n; i++)
    {
        angles.push_back(360 + angles[i]);
    }
    int start = 0;
    int cnt = 0;
    for (int j = 0; j < angles.size(); j++)
    {
        while (angles[j] - angles[start] > angle)
        {
            start++;
        }
        cnt = max(cnt, j - start + 1);
    }
    ans += cnt;
    return ans;
}

int main()
{
    vector<vector<int>> points = {{2, 1}, {2, 2}, {3, 3}};
    int angle = 90;
    vector<int> location = {1,1};
    cout << visiblePoints(points, angle, location) << endl;
    return 0;
}
