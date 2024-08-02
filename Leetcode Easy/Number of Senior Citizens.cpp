class Solution {
public:
    int countSeniors(vector<string>& details) {

        int result = 0 ;

        for(string &s : details){

            int ch1 = s[11] - '0';
            int ch2 = s[12] - '0';
            
            int age = (ch1 * 10) + ch2;

            if(age > 60){
                result++;
            }

        }

        return  result;
    }
};
