# from typing import Optional

# # The difference between binary tree and BST is that BST is ordered in terms of less than or greater than unlike a binary tree

# # Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

# # recursive solution
# class Solution:
#     def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
    
#         def dfs(node, currSum):
#             if not node:
#                 return False
            
#             currSum = currSum + node.val

#             # Base case
#             if not node.left and not node.right: 
#                 return currSum == targetSum
            
#             # Recursive case
#             return (dfs(node.left, currSum) or dfs(node.right, currSum))
        
#         return dfs(root, 0) # First call 
        

