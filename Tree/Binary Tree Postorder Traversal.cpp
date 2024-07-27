class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> result ;

        solve(root , result);

        return result;
    }

    void solve(TreeNode* root, vector<int>& result){

        if(root == NULL){
            return ;
        }

        solve(root->left , result);
        solve(root->right , result);

        result.push_back(root->val);
    }
};
