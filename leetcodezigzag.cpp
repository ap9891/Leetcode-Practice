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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<int> v;
        vector<vector<int> > ans;
        if(root==NULL)
        {
            return ans;
        }
        stack<TreeNode*> s1;
        stack<TreeNode*> s2;
        s1.push(root);
        ans.push_back({root->val});
        bool level = false;
        while(!(s1.empty() && s2.empty()))
        {
            while(!s1.empty())
            {
                TreeNode * n = s1.top();
                s1.pop();
                if(n->right != NULL)
                {
                    s2.push(n->right);
                    v.push_back(n->right->val);
                    level = true;
                }
                if(n->left != NULL)
                {
                    s2.push(n->left);
                    v.push_back(n->left->val);
                    level = true;
                }
            }
            if(level)
            {
                ans.push_back(v);
                v.clear();
                level = false;
            }
            while(!s2.empty())
            {
                TreeNode * n = s2.top();
                s2.pop();
                if(n->left != NULL)
                {
                    s1.push(n->left);
                    v.push_back(n->left->val);
                    level = true;
                }
                if(n->right != NULL)
                {
                    s1.push(n->right);
                    v.push_back(n->right->val);
                    level = true;
                }
            }
            if(level)
            {
                ans.push_back(v);
                v.clear();
                level=  false;
            }
        }
        return ans;
    }
};