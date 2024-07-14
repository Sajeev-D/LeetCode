# # Attempt 1:
# class Solution(object):
#     def isSubsequence(self, s, t):
#           if(len(s) > len(t)): 
#                return False
#           else:
#                t_index = 0
#                sSplit = list(s)
#                for i in range (len(s)):
#                     if((sSplit[i] not in t) or t.index(sSplit[i]) < t_index):
#                          return False
#                     else: 
#                          t_index = t.find(sSplit[i], t_index)
#                return True
                    

# class Solution(object):
#     def isSubsequence(self, s, t):
#         if len(s) > len(t):
#             return False
        
#         t_index = 0
#         for char in s:
#             t_index = t.find(char, t_index)
#             if t_index == -1:
#                 return False
#             t_index += 1  
        
#         return True

# str = "ahbgdc"
# print(len(str))

# # This is how to convert a string into a character array
# strSplit = list(str)
# print(strSplit)

