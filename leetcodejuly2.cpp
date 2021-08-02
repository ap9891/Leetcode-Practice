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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> v;
        if(root == NULL)
        {
            return v;
        }
        vector<int> *space;
        int size;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            space = new vector<int>;
            size = q.size();
            for(int i= 0; i < size ; i++){
            TreeNode* n = q.front();
            q.pop();
                space->push_back(n->val);
                if(n->left)
                {
                    q.push(n->left);
                }
                if(n->right)
                {
                    q.push(n->right);
                }
            }
        v.push_back(*space);
            delete space;
        }
        reverse(v.begin(),v.end());
        return v;
    }
};