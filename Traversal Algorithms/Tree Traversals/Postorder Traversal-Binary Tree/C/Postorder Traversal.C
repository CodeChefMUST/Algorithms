/*
        Author : Tanya Bansal
        Date : 18/10/2021
        Description : This Program is on Postorder Traversal
*/

#include<stdio.h>
#include<malloc.h>

struct node {
  int data;
  struct node * left;
  struct node * right;
};

void postorderTraversal(struct node * tree) {
  if (tree != NULL) {
    postorderTraversal(tree -> left);
    postorderTraversal(tree -> right);
    printf("%d\t", tree -> data);
  }
}
