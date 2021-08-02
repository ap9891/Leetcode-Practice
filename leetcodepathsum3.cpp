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
     void paths(TreeNode *root, int sum,stack<int> s,int &count)
        {
         int sum1=0;
            if(root == NULL)
            {
                return;
            }
            s.push(root->val);
            paths(root->left,sum,s,count);
            paths(root->right,sum,s,count);
            while(!s.empty())
            {
                sum1 += s.top();
                s.pop();
                if(sum1 == sum)
                {
                    count++;
                }
            }
        }
    int pathSum(TreeNode* root, int sum) {
       
        stack<int> s;
        int count = 0;
        paths(root,sum,s,count);
        return count;
    }
};