class Solution {
public:
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
        
        int n = colsum.size();

        vector<vector<int>> result(2 , vector<int>(n));

        int i = 0;
        while(i < n){

            if(colsum[i] == 2){
                result[0][i] = 1;
                result[1][i] = 1;
                upper--;
                lower--;
                i++;
            }

            else if(colsum[i] == 1){
                if(upper > lower){
                    result[0][i] = 1;
                    upper--;
                    i++;
                }
                else{
                    result[1][i] = 1;
                    lower--;
                    i++;
                }
            }

            else{
                i++;
            }

        }


        if(upper != 0 || lower != 0){
            return {};
        }

        return result;

    }
};
