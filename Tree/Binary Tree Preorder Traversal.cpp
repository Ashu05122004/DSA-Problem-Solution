class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> result;

        solve(root, result);

        return result;
    }

    void solve(TreeNode* root , vector<int>& result){
        if(root == NULL){
            return ;
        }

        result.push_back(root->val);
        solve(root->left , result);
        solve(root->right , result);
    }
};
