#include <stdio.h>
#include <stdlib.h>

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

static int first = 1;
void postorder(struct node* root) {
  if (!root) return;
  postorder(root->left);
  postorder(root->right);
  printf("%s%d", first ? "" : " ", root->data);
  first = 0;
}

int main(void) {
  int n, v;
  if (scanf("%d", &n) != 1) return 0;
  struct node *root = NULL;
  for (int i = 0; i < n; i++) { scanf("%d", &v); root = insert(root, v); }
  postorder(root);
  printf("\n");
  return 0;
}
