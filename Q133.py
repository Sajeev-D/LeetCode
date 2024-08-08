
# # Definition for a Node.
# class Node:
#     def __init__(self, val = 0, neighbors = None):
#         self.val = val
#         self.neighbors = neighbors if neighbors is not None else []


# from typing import Optional
# class Solution:
#     def cloneGraph(self, node: Optional['Node']) -> Optional['Node']:
#         newGraph = {}

#         def dfs(node):
#             if node in newGraph:
#                 return newGraph[node]
            
#             # Creating the copy node with val
#             copy = Node(node.val)

#             # Inserting new node to the new graph
#             newGraph[node] = copy
            
#             # Appending neighbours of the node to the copy node and calling the dfs on the neighbouring nodes
#             for neighbours in node.neighbors:
#                 copy.neighbors.append(dfs(neighbours))

#             return copy
        
#         return dfs(node) if node else None

        