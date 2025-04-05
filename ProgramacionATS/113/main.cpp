#include <bits/stdc++.h>

using namespace std;

const char ln = '\n';

struct TreeNode {
  int val;
  TreeNode *r;
  TreeNode *l;
  TreeNode() : val(0), r(nullptr), l(nullptr) {}
  TreeNode(int x) : val(x), r(nullptr), l(nullptr) {}
  TreeNode(int x, TreeNode *r, TreeNode *l) : val(x), r(r), l(l) {}
};

void insertTree(TreeNode *&tree, int n) {
  /// Check if the tree is empty
  if (tree == nullptr) {
    TreeNode *node = new TreeNode(n);
    tree = node;
  } else {
    int root = tree->val;
    if (n < root) {
      insertTree(tree->l, n);
    } else {
      insertTree(tree->r, n);
    }
  }
}

void showTree(TreeNode *&root, int cont) {
  if (root == nullptr) {
    return;
  }
  showTree(root->r, cont + 1);
  for (int i = 0; i < cont; i++) {
    cout << " ";
  }
  cout << root->val << ln;
  showTree(root->l, cont + 1);
}

void showTreeInorder(TreeNode *&root, int cont) {
  if (root == nullptr) {
    return;
  }
  showTreeInorder(root->l, cont + 1);
  for (int i = 0; i < cont; i++) {
    cout << " ";
  }
  cout << root->val << ln;
  showTreeInorder(root->r, cont + 1);
}

bool findNode(TreeNode *&root, int val) {
  if (root == nullptr)
    return false;
  if (root->val == val)
    return true;
  if (root->val < val)
    return findNode(root->r, val);
  return findNode(root->l, val);
}

int main() {
  TreeNode *tree = nullptr;
  int nums[10] = {8, 3, 10, 1, 6, 14, 4, 7, 3};
  for (int i = 0; i < 10; i++) {
    insertTree(tree, nums[i]);
  }
  int cont = 0;
  showTreeInorder(tree, cont);
  cout << ln << ln;
  showTree(tree, cont);
  cout << ln << ln;
  cout << findNode(tree, 14);
  return 0;
}
