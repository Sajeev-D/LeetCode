# class Solution(object):
#     def jump(self, nums):
#         size = len(nums)
#         numJumps = size - 1
#         if size == 1:
#             return 0
#         for i in range(size):
#             for j in range(nums[i]):
#                 if i == 0 and j == numJumps:
#                     return i + 1
#                 if i+j < size:
#                     if nums[i+j] + j == numJumps:
#                         if j != 0:
#                             return i + 2      
#                         else:
#                             return i + 1
#                 else:
#                     continue      
#         return -1
    

# class Solution(object):
#     def jump(self, nums):
#         res = 0 
#         l = r = 0 # window

#         while r < len(nums)-1:
#             farthest = 0
#             for i in range(l, r+1): # r+1 since the upper bound is decremented by 1
#                 farthest = max(farthest, i + nums[i])
#             l = r + 1
#             r = farthest
#             res += 1

#         return res




# if __name__ == '__main__':
    