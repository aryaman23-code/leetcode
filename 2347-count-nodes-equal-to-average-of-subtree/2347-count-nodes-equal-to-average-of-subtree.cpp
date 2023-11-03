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
    int count_nodes(TreeNode *root){
        if(root==NULL){
            return 0; 
        }
        return 1+count_nodes(root->left)+count_nodes(root->right);
    }
    int solve(TreeNode* & root,int & ans){
        if(root==NULL){
            return 0;
        }
        int s=0; 
        s+=solve(root->left, ans); 
        s+=solve(root->right, ans); 
        int c=count_nodes(root); 
        s+=root->val; 
        if(s/c==root->val){
            ans++; 
        }
        return s;
    }
    int averageOfSubtree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }

        int ans=0; 
        solve(root, ans);
        return ans;
    }
};