from typing import Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
def levelOrder(root: Optional[TreeNode]):
        if root == None:
            return []
        queue = []
        queue.append(root)
        while queue:
            n = len(queue)
            for _ in range(n):
                node = queue.pop(0)
                print(node.val)
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
        return ans

def insertTree(tree: TreeNode, val: int):
    if tree is None:
        return TreeNode(val)
    if val < tree.val:
        tree.left = insertTree(tree.left, val)
    else:
        tree.right = insertTree(tree.right, val)
    return tree

def _solve():
    root = [3,9,20,None,None,15,7]
    tree = None
    for r in root:
        tree = insertTree(tree, r)
    levelOrder(tree)


if __name__ == "__main__":
    _solve()
    pass
