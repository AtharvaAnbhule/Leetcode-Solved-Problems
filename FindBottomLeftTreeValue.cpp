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
 int value=0,max=INT_MIN;
    int findBottomLeftValue(TreeNode* root) {
        if(!root){
            return -1;
        }
        helper(root,0);

        return value;
    }

    void helper(TreeNode* node,int counter){
        if(counter>max){
            max=counter;
            value=node->val;
        }
        if(node->left){
            helper(node->left,counter+1);
        }
        if(node->right){
            helper(node->right,counter+1);
        }
    }
};
