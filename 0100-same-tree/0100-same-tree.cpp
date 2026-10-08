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
    int flag = 0;
    void check(TreeNode* node1, TreeNode* node2) {
        if(node1 == nullptr && node2 == nullptr) return;
        if(node1 == nullptr && node2 != nullptr) {
            flag = 1;
            return;
        }
        if(node1 != nullptr && node2 == nullptr) {
            flag = 1;
            return;
        }
        if(node1->val!=node2->val) {
            flag = 1;
            return;
        }
        check(node1->left, node2->left);
        check(node1->right, node2->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        check(p, q);
        if(flag == 1) {
            return false;
        }
        return true;
    }
};