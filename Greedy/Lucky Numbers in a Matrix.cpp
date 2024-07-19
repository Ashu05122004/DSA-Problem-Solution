class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();

        int max_element_row = INT_MIN;
        for(int row = 0 ; row < m ; row++){
            int min_row = INT_MAX;
            for(int col = 0 ; col < n ; col++){
                min_row = min(min_row , matrix[row][col]);
            }
            max_element_row = max(max_element_row , min_row);
        }

        int min_element_col = INT_MAX;
        for(int col = 0 ; col < n ; col++){
            int max_col = INT_MIN;
            for(int row = 0 ; row < m ; row++){
                max_col = max(max_col , matrix[row][col]);
            }
            min_element_col = min(min_element_col , max_col);
        }


        if(max_element_row == min_element_col){
            return {max_element_row};
        }

        return {};
    }
};
