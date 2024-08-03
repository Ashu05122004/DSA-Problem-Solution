class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return dfs(root) != -1;
    }

    int dfs(TreeNode* root){

        if(root == NULL){
            return 0;
        }

        int leftHeight = dfs(root->left);
        if(leftHeight == -1) return -1;
        
        int rightHeight = dfs(root->right);
        if(rightHeight == -1) return -1;

        if(abs(leftHeight - rightHeight) > 1){
            return -1;
        }

        return max(leftHeight , rightHeight) + 1;

    }
};
