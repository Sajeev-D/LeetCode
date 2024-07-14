# class Solution(object):
#     def twoSum(self, numbers, target):
#         point1 = 0
#         point2 = len(numbers) - 1

#         while point1  < point2:
#             if numbers[point1] + numbers[point2] == target:
#                 return [point1+1, point2+1]
#             elif numbers[point1] + numbers[point2] < target:
#                 point1 += 1
#             elif numbers[point1] + numbers[point2] > target:
#                 point2 -= 1
