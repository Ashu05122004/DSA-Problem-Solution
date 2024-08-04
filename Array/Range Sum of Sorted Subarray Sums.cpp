class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {

        vector<int> arr;

        for(int i = 0 ; i < n ; i++){
            int prev = 0;
            for(int j = i ; j < n ; j++){
                prev += nums[j];
                arr.push_back(prev); 
            }
        }

        sort(begin(arr) , end(arr));

        long sum = 0;
        int mod = 1e9 + 7;

        for(int i = left-1 ; i < right ; i++){
            sum += arr[i];
        }

        return sum % mod;

    }
};
