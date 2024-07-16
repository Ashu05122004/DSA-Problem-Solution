class Solution {
public:

    bool findPath(TreeNode* root, int target, string &path){

        if(root == NULL){
            return false ;
        }

        if(root->val == target){
            return true ;
        }

        path.push_back('L');
        if(findPath(root->left , target , path) == true){
            return true ;
        }
        path.pop_back();

        path.push_back('R');
        if(findPath(root->right , target , path) == true){
            return true;
        }
        path.pop_back();

        return false;
    }


    string getDirections(TreeNode* root, int startValue, int destValue) {
        
        string RootToSrc = "";
        string RootToDes = "";

        findPath(root , startValue , RootToSrc);
        findPath(root , destValue , RootToDes);

        int i = 0;
        while(i < RootToSrc.length() && i < RootToDes.length() && RootToSrc[i] == RootToDes[i]){
            i++;
        }

        string result = "";

        for(int j = 0 ; j < RootToSrc.length() - i ; j++){
            result.push_back('U');
        }

        for(int j = i ; j < RootToDes.length() ; j++){
            result.push_back(RootToDes[j]);
        }

        return result;

    }
};
