class Solution {
public:
    int minSwaps(vector<int>& nums) {

        int n = nums.size();

        int totalOnes = accumulate(begin(nums),end(nums),0);
        
        //vector<int> temp(2*n);

        //for(int i = 0 ; i < 2*n ; i++){
        //    temp[i] = nums[i%n];
        //}

        
        int i = 0;
        int j = 0;

        int currOnes = 0;
        int maxOnes  = 0 ;

        while(j < 2*n){

            if(nums[j%n] == 1){
                currOnes++;
            }

            if(j-i+1 > totalOnes){
                currOnes -= nums[i%n];
                i++;
            }

            maxOnes = max(maxOnes,currOnes);
            j++;
        }

        return totalOnes - maxOnes;

    }
};
