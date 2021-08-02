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
    TreeNode* Tree(vector<int> &inorder,vector<int> &postorder,int s,int e,int &indx)
    {
        if(s>e)
        {
            return NULL;
        }
        int value = postorder[indx--];
        TreeNode* root = new TreeNode(value);
        int k=-1;
        for(int i=s; i<=e;i++)
        {
            if(inorder[i] == value)
            {
                k=i;
                break;
            }
        }
         root->right = Tree(inorder,postorder,k+1,e,indx);
        root->left = Tree(inorder,postorder,s,k-1,indx);        
        return root;

    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int indx=inorder.size()-1;
        TreeNode* root = Tree(inorder,postorder,0,inorder.size()-1,indx);
        return root;
    }
};