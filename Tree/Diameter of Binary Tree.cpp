class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        dfs(root, diameter);
        return diameter;
    }

    int dfs(TreeNode* root, int& diameter){

        if(root == NULL){
            return 0;
        }

        int lh = dfs(root->left , diameter);
        int rh = dfs(root->right , diameter);

        diameter = max(diameter , (lh + rh));

        return 1 + max(lh , rh);

    }
};
