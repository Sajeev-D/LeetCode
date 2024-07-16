## Attempt 1

# class Solution(object):
#     def strStr(self, haystack, needle):
#         if len(needle) > len(haystack) or len(needle) == 0:
#             return -1
#         heyChar = list(haystack)
#         neeChar = list(needle)
#         startIndex = 0
#         started = False
#         index = 0

#         for i in range(len(haystack)):
#             if neeChar[index] == heyChar[i] and started == False:
#                 startIndex = i
#                 index +=1
#                 started = True
#                 if index == len(needle):
#                     return startIndex
#             elif neeChar[index] == heyChar[i] and started == True:
#                 index += 1
#                 if index == len(needle):
#                     return startIndex
#             elif neeChar[index] != heyChar[i] and started == True:
#                 return -1
            
#         return -1

# class Solution(object):
#     def strStr(self, haystack, needle):
#         if len(needle) == 0:
#              return 0
#         if len(needle) > len(haystack):
#             return -1

#         for i in range(len(haystack) - len(needle) + 1):  # +1 to include last possible start 
#             indexNeedle = 0
#             for j in range(i, i + len(needle)):
#                 if needle[indexNeedle] != haystack[j]:
#                     break 
#                 indexNeedle += 1

#             if indexNeedle == len(needle):
#                 return i
#         return -1
                  

# if __name__ == "__main__":
#         print("Hi")
#         s1 = Solution() 
#         str1 = "a"
#         str2 = "a"
#         s1.strStr(str1, str2)

        

        