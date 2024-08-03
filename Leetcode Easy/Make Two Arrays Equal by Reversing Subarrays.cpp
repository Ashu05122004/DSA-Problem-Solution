class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        
        // O(nlogn)
        /*
        sort(begin(arr),end(arr));
        sort(begin(target),end(target));

        for(int i=0 ; i<arr.size() ; i++){
            if(arr[i] != target[i]){
                return false;
            }
        }

        return true;
        */

        //o(n)
        unordered_map<int,int> mp;

        for(int &num : target){
            mp[num]++;
        }

        for(int &num : arr){
            if(mp.find(num) == mp.end()){
                return false;
            }

            mp[num]--;
            if(mp[num] == 0){
                mp.erase(num);
            }
        }

        return mp.size() == 0;
    }
};
