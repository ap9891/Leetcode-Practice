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
    int widthOfBinaryTree(TreeNode* root) {
        if(root== NULL)
        {
            return 0;
        }
        int ans=0;
        queue<pair<TreeNode*,int> > q;
        q.push(make_pair(root,1));
        while(!q.empty())
        {
            int count= q.size();
            int start = q.front().second;
            int end = q.back().second;
            ans = max(ans, end -start +1);
            for(int i=0; i < count ; i ++)
            {
                pair<TreeNode*,int > p = q.front();
                int index = p.second- start;
                q.pop();
                if(p.first->left)
                {
                    q.push(make_pair(p.first->left,2*index));
                }
                if(p.first->right)
                {
                    q.push(make_pair(p.first->right,2*index+1));
                }
            }
        }
        
            return ans;
        }
        
};