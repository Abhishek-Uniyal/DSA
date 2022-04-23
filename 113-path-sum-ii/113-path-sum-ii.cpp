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
    void f(TreeNode* root,int targetSum,int count,vector<int> &temp,vector<vector<int>> &ans)
    {
        
        if(root==NULL)
        {
            return;
        }
        count=count+root->val;
        temp.push_back(root->val);
        if(root->left==NULL && root->right==NULL)
        {
            if(count==targetSum)
            {
                ans.push_back(temp);
                temp.pop_back();
                return;
            }
            else
            {   temp.pop_back();
                return;
            }
        }
        
        f(root->left,targetSum,count,temp,ans);
        f(root->right,targetSum,count,temp,ans);
        temp.pop_back();
        
    }
    
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        if(root==NULL)
        {
            return ans;
        }
        int count=0;
        vector<int> temp;
        f(root,targetSum,count,temp,ans);
        return ans;
    }
};