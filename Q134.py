from typing import List

# Time limit exceeded since it is O(n^2)
# class Solution:
#     def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
#         n = len(gas)
#         for startIndex in range(n):
#             if gas[startIndex] >= cost[startIndex]:
#                 sumGas = 0
#                 sumCost = 0
#                 for j in range(n):
#                     index = (startIndex + j) % n
#                     sumGas += gas[index]
#                     sumCost += cost[index]
#                     if sumCost > sumGas:
#                         break
#                 if sumGas >= sumCost:
#                     return startIndex
#         return -1
        # Return starting gas stations index if possible to complete one loop otherwise return -1

# Greedy solution is O(n)
# class Solution:
#     def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
#         if sum(gas) < sum(cost):
#             return -1
        
#         total = 0
#         startIndex = 0

#         for i in range(len(gas)):
#             total += gas[i] - cost[i]

#             if total < 0:
#                 total = 0
#                 startIndex = i + 1
#         return startIndex