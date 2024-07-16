# class Solution(object):
#     def longestCommonPrefix(self, strs):
#         size = len(strs)
#         toRet = ""
#         for i in range(len(strs[0])):
#             for s in strs:
#                 if len(s) == i or s[i] != strs[0][i]:
#                     return toRet
#             toRet += strs[0][i]
#         return toRet


#         """
#         :type strs: List[str]
#         :rtype: str
#         """

# if __name__ == "__main__":
#     print("hello")
#     s = Solution()
#     strs = ["hell", "hello", "happy"]
#     s.longestCommonPrefix(strs)