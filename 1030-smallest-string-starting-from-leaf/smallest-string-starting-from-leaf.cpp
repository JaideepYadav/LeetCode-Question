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
    void f(TreeNode* root,string temp,string &ans){
        if(root == nullptr) return;
        if(root->left == nullptr && root->right == nullptr){
            temp += ('a'+root->val);
            string cp = temp;
            reverse(cp.begin(),cp.end());
            ans = min(ans,cp);
            temp.pop_back();
            return;
        }

        temp += root->val + 'a';
        f(root->left,temp,ans);
        f(root->right,temp,ans);
        temp.pop_back();
    }
    
public:
    string smallestFromLeaf(TreeNode* root) {

        string temp = "";
        string ans = "";
        for(int i=0;i<8501;i++){
            ans +='z';
        }
        f(root,temp,ans);
        return ans;

        
    }
};