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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
    
    if(root==nullptr && subRoot==nullptr){
        return false;
    }
    if(root==subRoot){
        return true;
    }
    bool check=isSubtree(root->left,subRoot);
    bool check=isSubtree(root->right,subRoot);


       
    }
};