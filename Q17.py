# from typing import List

# class Solution:
#     def letterCombinations(self, digits: str) -> List[str]:
#         if len(digits) == 0 or (len(digits) == 1 and digits[0] == 1):
#             return None
        
#         res = []

#         digitToChar=  {
#             "2": "abc", 
#             "3": "def", 
#             "4": "ghi", 
#             "5": "jkl", 
#             "6": "mno", 
#             "7": "pqrs", 
#             "8": "tuv", 
#             "9": "wxyz"
#         }

#         # i is the index on the digit string
#         # curStr is the current string that is being built
#         def backtrack(i, curStr):
#             # Base case:
#             # if the length of the string is equal to the length of digit than the 
#             # all the strings have been added and can return.
#             if len(curStr) == len(digits):
#                 res.append(curStr)

#                 # exit the loop
#                 return 
#             for c in digitToChar[digits[i]]:
#                     # Call the backtrack for all the characters in digit
#                     # and call backtrack with the new digit and all combinations of the current string
#                     backtrack(i+1, curStr + c)
#         if digits:
#             backtrack(0, "")
    
#         return res