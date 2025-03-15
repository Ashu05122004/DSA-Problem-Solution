class Solution {
public:
    int t[101][101];

    int solve(vector<vector<int>>& obstacleGrid ,int i, int j, int m, int n) {

        if( i >= m || j >= n || obstacleGrid[i][j] == 1) {
            return 0;
        }

        if(i == m-1 && j == n-1) {
            return 1; 
        }

        if(t[i][j] != -1) {
            return t[i][j];
        }

        int right = solve(obstacleGrid , i, j+1, m, n);
        int down  = solve(obstacleGrid , i+1, j, m, n);

        return t[i][j] = right + down;
    }


    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        memset(t,-1,sizeof(t));
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        return solve(obstacleGrid , 0, 0, m, n);
    }

};
