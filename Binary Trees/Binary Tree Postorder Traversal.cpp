class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        if(!root) return {};
        vector<int> v;
        postorder(root,v);
        return v;
    }
    void postorder(TreeNode*root, vector<int> &v){
        if(!root) return;
        postorder(root->left,v);
        postorder(root->right,v);
        v.push_back(root->val);
    }
};
