class Solution {
public:
    bool isPalindrome(int x) {

        if(x < 0){
            return false;
        }
        
        long long temp = x;
        long long reversed = 0;

        while(x != 0){
            int mod = x % 10;
            reversed = reversed * 10 + mod;
            x = x / 10;
        }


        if (temp == reversed){
            return true ;
        }
        return false;
    }
};
