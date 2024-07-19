class Solution {
public:
    int minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {

        int a = horizontalCut.size();
        int b = verticalCut.size();
        
        sort(begin(horizontalCut),end(horizontalCut),greater<int>());
        sort(begin(verticalCut),end(verticalCut),greater<int>());

        int horizontal_lines = 1;
        int vertical_lines = 1;
        int result = 0;

        int i = 0 ;
        int j = 0 ;

        while(i < a && j < b){
            if(horizontalCut[i] >= verticalCut[j]){
                result += (horizontalCut[i] * vertical_lines);
                i++;
                horizontal_lines++;
            }
            else{
                result += (verticalCut[j] * horizontal_lines);
                j++;
                vertical_lines++;
            }
        }

        while(i < a){
            result += (horizontalCut[i] * vertical_lines);
            i++;
            horizontal_lines++;
        }

        while(j < b){
            result += (verticalCut[j] * horizontal_lines);
            j++;
            vertical_lines++;
        }

        return result ;
    }
};
