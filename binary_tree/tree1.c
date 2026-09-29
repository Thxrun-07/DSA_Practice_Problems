#include <stdio.h>
#include <stdlib.h>

static int first = 1;
struct node { int data; struct node *left,*right; };

struct node* newNode(int item) {
  struct node *t = malloc(sizeof *t);
  t->data = item; t->left = t->right = NULL;
  return t;
}

struct node* insert(struct node *root, int v) {
  if (!root) return newNode(v);
  if (v < root->data) root->left = insert(root->left, v);
  else root->right = insert(root->right, v);
  return root;
}

void preorder(struct node* root) {
  if (!root) return;
  printf("%s%d", first ? "" : " ", root->data);
  first = 0;
  preorder(root->left);
  preorder(root->right);
}

int main(void) {
  int n, v;
  if (scanf("%d", &n) != 1) return 0;
  struct node *root = NULL;
  for (int i = 0; i < n; i++) { scanf("%d", &v); root = insert(root, v); }
  preorder(root);
  printf("\n");
  return 0;
}
