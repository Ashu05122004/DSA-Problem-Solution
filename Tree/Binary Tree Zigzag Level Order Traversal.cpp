class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> result;

        if(root == NULL){
            return result;
        }

        queue<TreeNode*> q;
        q.push(root);

        bool flag = true;

        while(!q.empty()){
            int n = q.size();
            vector<int> arr(n);

            for(int i = 0 ; i < n ; i++){
                TreeNode* temp = q.front();
                q.pop();

                int idx = (flag) ? i : (n - 1 - i);
                arr[idx] = temp->val;

                if(temp->left != NULL){
                    q.push(temp->left);
                }
                if(temp->right != NULL){
                    q.push(temp->right);
                }
            }

            flag = !(flag);
            result.push_back(arr);

        }

        return result;

    }
};
