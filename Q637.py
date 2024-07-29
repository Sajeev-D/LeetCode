# from typing import Optional
# from typing import List
# from collections import defaultdict


# # Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

# class Solution:
#     def averageOfLevels(self, root: Optional[TreeNode]) -> List[float]:
#         sum = defaultdict(float)
#         count = defaultdict(int)

#         def dfs(node, h):
#             if not node: return
#             dfs(node.left, h+1)
#             dfs(node.right, h+1)
#             sum[h] += node.val
#             count[h] += 1
        
#         dfs(root, 0)

#         output = [] # Create a list
#         for i in range(len(sum)):
#             output.append(sum[i]/count[i])

#         return output

