class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if(!root) return {};
        vector<int> v;
        preorder(root,v);
        return v;
    }
    void preorder(TreeNode*root, vector<int> &v){
        if(!root) return;
        v.push_back(root->val);
        preorder(root->left,v);
        preorder(root->right,v);
    }
};
