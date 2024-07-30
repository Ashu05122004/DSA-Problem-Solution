class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
 
        // Iterative Solution Using 2 Stack 

        vector<int> result;
        stack<TreeNode*> st1 , st2;

        if(root == NULL){
            return result;
        }

        st1.push(root);

        while(!st1.empty()){

            TreeNode* temp = st1.top();
            st1.pop();

            st2.push(temp);

            if(temp->left != NULL){
                st1.push(temp->left);
            }
            if(temp->right != NULL){
                st1.push(temp->right);
            }

        }

        while(!st2.empty()){
            result.push_back(st2.top()->val);
            st2.pop();
        }

        return result;

    }
};
