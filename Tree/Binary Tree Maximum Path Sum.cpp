class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int max_sum = INT_MIN;
        dfs(root , max_sum);
        return max_sum;
    }

    int dfs(TreeNode* root , int &max_sum){

        if(root == NULL){
            return 0;
        }

        int left  = max(0 , dfs(root->left  , max_sum));
        int right = max(0 , dfs(root->right , max_sum));

        max_sum = max(max_sum , root->val + left + right);

        return root->val + max(left , right);

    }
};
