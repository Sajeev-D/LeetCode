## Attempt 1:

# class Solution:
#     def isIsomorphic(self, s: str, t: str) -> bool:
#         if len(s) != len(t):
#             return False
        
#         hash1 = {}
#         hash2 = {}

#         str1 = list(s)
#         str2 = list(t)

#         hash1[0] = 0
#         hash2[0] = 0
#         index1 = 0
#         index2 = 0

#         for i in range(1, len(s)):
#             if str1[i] == str1[i-1]:
#                 hash1[i] = index1
#             else:
#                 index1 = index1 + 1
#                 hash1[i] = index1

#             if str2[i] == str2[i-1]:
#                 hash2[i] = index2
#             else:
#                 index2 = index2 + 1
#                 hash2[i] = index2

#         if hash2 == hash1:
#             return True
#         else:
#             return False
            

# # Attempt 2:

# class Solution:
#     def isIsomorphic(self, s: str, t: str) -> bool:
#         if len(s) != len(t):
#             return False
        
#         hash1 = {}
#         hash2 = {}

#         for i in range(len(s)):
#             char1 = s[i]
#             char2 = t[i]

#             if (char1 in hash1 and hash1[char1] != char2) or (char2 in hash2 and hash2[char2] != char1):
#                 return False
#             else:
#                 hash1[char1] = char2
#                 hash2[char2] = char1
#         return True