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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL)
        {
            return {};
        }
        vector<vector<int> > ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int level = q.size();
            vector<int> v;
            while(level--)
            {
            TreeNode* n = q.front();
            v.push_back(n->val);
            q.pop();
            if(n->left)
            {
                q.push(n->left);
            }
            if(n->right)
            {
                q.push(n->right);
            }
            }
        
        ans.push_back(v);
        }
        return ans;
    }
};