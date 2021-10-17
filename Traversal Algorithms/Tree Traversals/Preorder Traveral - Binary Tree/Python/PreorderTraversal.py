
# Sample Input::
# Input Tree :
#   1
#  / \
# 6   5
#    /
#   2

# Output: [1, 6, 5, 2]

# Recursive Code
# Binary Tree representation
# class TreeNode:

#    def __init__(self,value):
#        self.value = value
#        self.left = None
#        self.right = None

def preorder(root):
    res = []

    preorderTraversal(root, res)
    return res

def preorderTraversal(root, res):

    if root is None:
        return 

    res.append(root.value)

    preorderTraversal(root.left, res)

    preorderTraversal(root.right, res)

    return

# Time Complexity: O(n)
# Space Complexity: O(n)




