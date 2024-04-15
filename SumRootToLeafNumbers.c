/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


 //digits 0 to 9 only


int sumNumbers(struct TreeNode* root) {
   int ans=0;

   void dfs(struct TreeNode* node,int path){
    if(!node) return;
    if(!node->left && !node->right){
        ans+=path*10+node->val; // to get at that position
        return;
    }
    dfs(node->left,path*10+node->val);
    dfs(node->right,path*10+node->val);
   }

   dfs(root,0);
   return ans;

}
