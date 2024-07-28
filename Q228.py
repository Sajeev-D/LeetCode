# class Solution(object):
#     def summaryRanges(self, nums):
#         # nums is the array of numbers
#         retList = list()

#         if len(nums) == 0:
#             return retList
        
#         start = nums[0]
#         for i in range(1, len(nums)):
#             if nums[i] == nums[i-1]+1:
#                 continue
#             else:
#                 if nums[i-1] == start:
#                     string = str(start)
#                     retList.append(string)
#                     start = nums[i]
#                 else:
#                     string = str(start) + "->" + str(nums[i-1])
#                     retList.append(string)
#                     start = nums[i]

#         if nums[-1] == start:
#             retList.append(str(nums[-1]))
#         else:
#             retList.append(str(start) + "->" + str(nums[-1]))

#         return retList

#         """
#         :type nums: List[int]
#         :rtype: List[str]
#         """
        