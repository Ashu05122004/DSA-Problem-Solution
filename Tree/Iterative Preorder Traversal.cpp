class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
      
        vector<int> result;
        stack<TreeNode*> st;

        if(root == NULL){
            return result;
        }

        st.push(root);

        while(!st.empty()){

            TreeNode* temp = st.top();
            st.pop();
            result.push_back(temp->val);

            if(temp->right != NULL){
                st.push(temp->right);
            }
            if(temp->left != NULL){
                st.push(temp->left);
            }

        }

        return result;

    }
};
