#include <stdio.h>
struct tree {
    int val;
    struct tree* left;
    struct tree* right;
};

typedef struct tree TreeNode;

TreeNode* newTree(int data)
{
    TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode))
    root->val = data;
    root->left = NULL;
    root->right = NULL;
    return (root);
}

void postorder(TreeNode* root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->val);
}

int main()
{
    //building the tree
    TreeNode* t = newTree(7);
    t->left = newTree(1);
    t->left->left = newTree(0);
    t->left->right = newTree(3);
    t->left->right->left = newTree(2);
    t->left->right->right = newTree(5);
    t->left->right->right->left = newTree(4);
    t->left->right->right->right = newTree(6);
    t->right = newTree(9);
    t->right->left = newTree(8);
    t->right->right = newTree(10);

    printf("postorder traversal of the above tree is:\n");
    
    postorder(t);

    return 0;
}
