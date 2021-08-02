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
    vector<string> v;
    void inorder(TreeNode* root, string sum)
    {
        if(root==NULL)
        {
            return;
        }
        sum += to_string(root->val);
        if(root->left == NULL && root->right == NULL)
        {
             v.push_back(sum);
        }
        inorder(root->left,sum);
        inorder(root->right,sum);
    }
    int sumRootToLeaf(TreeNode* root) {
        inorder(root,"");
        int res=0;
        for(auto node : v)
        {
            res += stoi(node,nullptr,2);
            
        }
        return res;
    }
};