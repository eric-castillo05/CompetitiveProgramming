#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i < b; ++i)
using namespace std;

struct TreeNode {
  int val;
  TreeNode *der;
  TreeNode *izq;
  TreeNode() : val(0), izq(nullptr), der(nullptr) {}
  TreeNode(int x) : val(x), izq(nullptr), der(nullptr) {}
  TreeNode(int x, TreeNode *izq, TreeNode *der) : val(x), izq(izq), der(der) {}
};

void printTreePreOrder(TreeNode *&root) {
  if (root == nullptr)
    return;
  cout << root->val << "-";
  printTreePreOrder(root->izq);
  printTreePreOrder(root->der);
}
void insertTree(TreeNode *&tree, int val) {
  if (tree == nullptr) {
    TreeNode *node = new TreeNode(val);
    tree = node;
  } else {
    int root = tree->val;
    if (val < root) {
      insertTree(tree->izq, val);
    } else {
      insertTree(tree->der, val);
    }
  }
}
void _solve() {
  vector<int> nums = {8, 3, 1, 4};
  TreeNode *tree = nullptr;
  REP(i, 0, nums.size()) { insertTree(tree, nums[i]); }
  printTreePreOrder(tree);
}

int main() {
  _solve();
  return 0;
}
