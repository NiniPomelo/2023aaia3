//week16-5.cpp 學習計畫 Binary Tree (隱藏)第3題
//LeetCode 94. Binary Tree Inorder Traversal
class Solution {
public:
    void helper(TreeNode* root, vector<int>& ans) {
        if(root==nullptr) return;

        helper(root->left, ans); // 左半邊 函式呼叫函式
        ans.push_back(root->val); // 中間， 加到 ans 裡面
        helper(root->right, ans); // 右半邊 函式呼叫函式
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;

        helper(root, ans);
        
        return ans;
    }
};

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