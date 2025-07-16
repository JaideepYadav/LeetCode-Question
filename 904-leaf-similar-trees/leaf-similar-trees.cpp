/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void roo(TreeNode* root,vector<int>&ans){
        if(root==nullptr)return;
        if(root->left==nullptr && root->right==nullptr){
            ans.push_back(root->val);
            return;
        }
        roo(root->left,ans);
        roo(root->right,ans);

    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>ans;
        vector<int>ans2;
        roo(root1,ans);
        roo(root2,ans2);
        if(ans==ans2)return true;
        return false;
    }
};