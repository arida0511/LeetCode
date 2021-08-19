/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void func(struct TreeNode* cur, int* returnSize, int* arr){
    if(cur==NULL) return;
    func(cur->left, returnSize, arr);
    arr[(*returnSize)++] = cur->val;
    func(cur->right, returnSize, arr);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize){
    int* arr=malloc(sizeof(int)*100);
    *returnSize = 0;
    func(root,returnSize,arr);
    return arr;
}
