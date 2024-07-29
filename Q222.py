# from typing import Optional

# # Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

# class Solution:
#     def countNodes(self, root: Optional[TreeNode]) -> int:
#         if root == None:
#             return 0
        
#         def recursion(node):
#             # Base case
#             if node.left == None and node.right == None:
#                 return 1
            
#             # Recursive case
#             if node.left == None and node.right != None:
#                 return 1 + recursion(node.right)

#             elif node.left != None and node.right == None:
#                 return 1 + recursion(node.left)

#             elif node.left != None and node.right != None:
#                 return 1 + recursion(node.right) + recursion(node.left)
            
#         return recursion(root)