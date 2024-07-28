# def findKey(yourDict, value):
#     for key,val in yourDict.items():
#         if val == value:
#             return key
        
#     return -1

# class Solution(object):
#     def isAnagram(self, s, t):
#         if len(t) != len(s):
#             return False
        
#         hash1 = {}
#         hash2 = {}

#         # for i in range(len(s)):
#         #     hash1[i] = s[i]
#         #     hash2[i] = t[i]
#         # for j in range(len(s)):
#         #     if s[j] in hash2:
#         #         key2 = findKey(hash2, s[j])
#         #         hash2[key2] = -1
#         #     else:
#         #         return False

#         for char in s:
#             # hash1.get(char, 0) will return the value if the key exists, otherwise it will return 0
#             # Each char key is storing its frequency
#             hash1[char] = hash1.get(char, 0) + 1 

#         for char in t: 
#             hash2[char] = hash2.get(char, 0) + 1
            
#         if hash1 == hash2:
#             return True
#         else: 
#             return False
        
#         """
#         :type s: str
#         :type t: str
#         :rtype: bool
#         """
    
