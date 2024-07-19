class Solution {
public:
    long long minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
        
        int a = horizontalCut.size();
        int b = verticalCut.size();


        sort(begin(horizontalCut),end(horizontalCut),greater<int>());
        sort(begin(verticalCut),end(verticalCut),greater<int>());

        int horizontal_pieces = 1;
        int vertical_pieces = 1;

        long long result = 0 ;

        int i = 0 ;
        int j = 0 ;

        while(i < a && j < b){
            
            if(horizontalCut[i] > verticalCut[j]){
                result += (horizontalCut[i] * vertical_pieces);
                i++;
                horizontal_pieces++;
            }
            else{
                result += (verticalCut[j] * horizontal_pieces);
                j++;
                vertical_pieces++;
            }
        }

        while(i < a){
            result += (horizontalCut[i] * vertical_pieces);
            i++;
            horizontal_pieces++;
        }

        while( j < b){
            result += (verticalCut[j] * horizontal_pieces);
            j++;
            vertical_pieces++;
        }

        return result ;
        
    }
};
