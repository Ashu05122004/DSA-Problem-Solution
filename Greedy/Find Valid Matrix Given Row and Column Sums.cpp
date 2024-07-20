class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        
        int m = rowSum.size();
        int n = colSum.size();

        vector<vector<int>> result(m , vector<int>(n));

        int i = 0 ;
        int j = 0 ;

        while(i < m && j < n){

            result[i][j] = min(rowSum[i] , colSum[j]);

            rowSum[i] -= result[i][j];
            colSum[j] -= result[i][j];

            if(rowSum[i] == 0){
                i++;
            } 

            if(colSum[j] == 0){
                j++;
            }

        }

        return result;

    }
};
