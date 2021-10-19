#include<stdio.h>
#include<malloc.h>

struct node {
  int data;
  struct node * left;
  struct node * right;

};
struct node * tree;
void create_tree(struct node * );
struct node * insertElement(struct node * , int);
void postorderTraversal(struct node * );
int main() {
  int option, val;
  struct node * ptr;
  create_tree(tree);
  do {
    printf("\n ****MAIN MENU***** \n");
    printf("\n 1. Insert Element");
    printf("\n 2. Postorder Traversal");
    printf("\n 3. Exit");
    printf("\n Enter your option : ");
    scanf("%d", & option);
    switch (option) {
    case 1:
      printf("\n Enter the value of the new node : ");
      scanf("%d", & val);
      tree = insertElement(tree, val);
      break;
    case 2:
      printf("\n The elements of the tree are : \n");
      postorderTraversal(tree);
      break;
    }
  } while (option != 3);
  return 0;
}

void create_tree(struct node * tree) {
  tree = NULL;
}
struct node * insertElement(struct node * tree, int val) {
  struct node * ptr, * nodeptr, * parentptr;
  ptr = (struct node * ) malloc(sizeof(struct node));
  ptr -> data = val;
  ptr -> left = NULL;
  ptr -> right = NULL;
  if (tree == NULL) {
    tree = ptr;
    tree -> left = NULL;
    tree -> right = NULL;
  } else {
    parentptr = NULL;
    nodeptr = tree;
    while (nodeptr != NULL) {
      parentptr = nodeptr;
      if (val < nodeptr -> data)
        nodeptr = nodeptr -> left;
      else
        nodeptr = nodeptr -> right;
    }
    if (val < parentptr -> data)
      parentptr -> left = ptr;
    else
      parentptr -> right = ptr;
  }
  return tree;
}

void postorderTraversal(struct node * tree) {
  if (tree != NULL) {
    postorderTraversal(tree -> left);
    postorderTraversal(tree -> right);
    printf("%d\t", tree -> data);
  }
}
