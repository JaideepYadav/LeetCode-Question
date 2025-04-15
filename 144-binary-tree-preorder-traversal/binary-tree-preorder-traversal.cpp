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
    void pre(TreeNode* root,vector<int>&ans){
       TreeNode* curr=root;
        while(curr!=nullptr){
            if(curr->left==nullptr){
                ans.push_back(curr->val);
                curr=curr->right;
            }
            else{
                TreeNode* prede=curr->left;
                while(prede->right!=nullptr && prede->right!=curr){
                    prede=prede->right;
                }
                  if(prede->right==nullptr){
                    ans.push_back(curr->val);
                    prede->right=curr;
                    curr=curr->left;
        }
            else{
                    prede->right=nullptr;
                    
                    curr=curr->right;
        }
            }
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        pre(root,ans);
        return ans;
    }
};