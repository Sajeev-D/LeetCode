# class Solution(object):
#     def lengthOfLastWord(self, s):
#         arr = s.split(" ")
#         size = len(arr)
#         lastStr = ""
#         for i in range (len(arr)):
#             if arr[i] != "":
#                 lastStr = arr[i]

#         return len(lastStr)

# # Better Solution
# class Solution(object):
#     def lengthOfLastWord(self, s):
#         arr = s.split(" ")
#         size = len(arr)
#         lastStr = ""
#         for i in reversed(range (len(arr))):
#             if arr[i] != "":
#                 return len(arr[i])

#         return len(lastStr)

# if __name__ == "__main__":
#     str = "   fly me   to   the moon  "
#     s = Solution()
#     s.lengthOfLastWord(str)