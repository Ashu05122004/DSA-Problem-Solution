class Solution {
public:
    int maxDepth(TreeNode* root) {

        /*

            // Recurrsive --> TC-O(height)

        if(root == NULL){
            return 0;
        }

        int left = maxDepth(root->left);
        int right = maxDepth(root->right);

        return 1 + max(left , right);

        */


            // Level Order --> TC-O(n)
        int height = 0;

        if(root == NULL){
            return height;
        }

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){

            height++;

            int n = q.size();

            for(int i = 0 ; i < n ; i++){
                TreeNode* temp = q.front();
                q.pop();

                if(temp->left != NULL){
                    q.push(temp->left);
                }
                if(temp->right != NULL){
                    q.push(temp->right);
                }
            }

        }

        return height;
        
    }
};
