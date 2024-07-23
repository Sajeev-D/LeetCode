# # Attempt 1: Not Bijective so failing 3 test cases
# import collections

# class Solution(object):
#     def wordPattern(self, pattern, s):

#         charToStr = collections.defaultdict(set) # Hashmap
#         strToChar = collections.defaultdict(set) # Hashmap

#         stringArr = s.split(" ") # array of strings
#         patternArr = list(pattern) # array of characters

#         if len(stringArr) != len(patternArr):
#             return False
#         if len(stringArr) == len(patternArr) == 0:
#             return True
        
#         for i in range(len(stringArr)):
#             if ord(pattern[i]) in charToStr:
#                if stringArr[i] not in charToStr[ord(pattern[i])]:
#                    return False
#             elif stringArr[i] in strToChar:
#                 if patternArr[i] not in strToChar[stringArr[i]]:
#                     return False
#             elif ord(pattern[i]) not in charToStr:
#                 charToStr[ord(pattern[i])].add(stringArr[i])
#             elif stringArr[i] not in strToChar:
#                 strToChar[stringArr[i]].add(pattern[i])
#         return True
    
# # Attemp 2: Using 2 hashmaos to check bijectively
# import collections

# class Solution(object):
#     def wordPattern(self, pattern, s):
#         charToStr = {}  # Simple dictionary for character to string mapping
#         strToChar = {}  # Simple dictionary for string to character mapping

#         stringArr = s.split(" ")  # Array of strings
#         patternArr = list(pattern)  # Array of characters

#         if len(stringArr) != len(patternArr):
#             return False

#         for i in range(len(stringArr)):
#             char = patternArr[i]
#             word = stringArr[i]

#             # Check if the character is already mapped to a different word
#             if char in charToStr and charToStr[char] != word:
#                 return False

#             # Check if the word is already mapped to a different character
#             if word in strToChar and strToChar[word] != char:
#                 return False

#             charToStr[char] = word
#             strToChar[word] = char

#         return True

#         """
#         :type pattern: str
#         :type s: str
#         :rtype: bool
#         """
        