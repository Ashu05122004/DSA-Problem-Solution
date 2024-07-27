class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> result;

        solve(root , result);

        return result;
    }

    void solve(TreeNode* root , vector<int>& result){

        if(root == NULL){
            return ;
        }

        solve(root->left , result);

        result.push_back(root->val);

        solve(root->right , result);

    }
};
