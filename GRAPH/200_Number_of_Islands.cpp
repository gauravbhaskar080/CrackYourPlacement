#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<char>> &grid, int i, int j)
{
    if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] != '1')
        return;
    grid[i][j] = '0';
    dfs(grid, i + 1, j);
    dfs(grid, i - 1, j);
    dfs(grid, i, j + 1);
    dfs(grid, i, j - 1);
}
int numIslands(vector<vector<char>> &grid){
    if (grid.empty() || grid[0].empty()) return 0;
    int islands = 0;
    for (int i = 0; i < grid.size(); i++){
        for (int j = 0; j < grid[0].size(); j++){
            if (grid[i][j] == '1'){
                islands++;
                dfs(grid, i, j);
            }
        }
    }
    return islands;
}

int main(){
    vector<vector<char>> grid = {{'1', '1', '0', '0', '0'}, {'1', '1', '0', '0', '0'}, {'0', '0', '1', '0', '0'}, {'0', '0', '0', '1', '1'}};
    cout << "Number of Islands: " << numIslands(grid) << endl;
    return 0;
}
