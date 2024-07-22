# class Solution(object):
#     def minSubArrayLen(self, target, nums):
#         currLength = 0
#         minLength = len(nums)
#         sum = 0
#         found = False
#         for i in range(len(nums)):
#             sum += nums[i]
#             currLength += 1
#             if sum >= target:
#                 minLength = min(minLength, currLength)
#                 found = True
#                 currLength = 0
#                 sum = 0
#         if found == True:
#             return minLength
#         else:
#             return 0

# Attempt 2:

# class Solution(object):
#     def minSubArrayLen(self, target, nums):
#         if len(nums) == 1:
#             if nums[0] >= target:
#                 return 1
#             else:
#                 return 0
#         if nums[0] >= target:
#             return 1

#         r = 1
#         l = 0

#         window = len(nums) + 1
#         found = False

#         while r < len(nums):
#             sum = 0
#             for i in range(l, r+1):
#                 sum += nums[i]

#             if sum >= target:
#                 window = min(window, r-l+1)
#                 found = True
#                 if l == r:
#                     return 1
#                 l += 1
#             elif sum < target:
#                 r+=1

#         if found == True:
#             return window
#         else:
#             return 0

# Attempt 3:

# class Solution(object):
#     def minSubArrayLen(self, target, nums):
#         if not nums:
#             return 0
        
#         n = len(nums)
#         left = 0
#         currSum = 0
#         minLength = float('inf')

#         for right in range(n):
#             currSum += nums[right]

#             while currSum >= target:
#                 minLength = min(minLength, right-left+1)
#                 currSum -= nums[left]
#                 left += 1

#         return minLength if minLength != float('inf') else 0
