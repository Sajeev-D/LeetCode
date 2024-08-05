# class Solution:
#     def isHappy(self, n: int) -> bool:
#         # check if n is a happy number
#         if n < 1:
#             return False
#         elif n == 1:
#             return True
        
#         numHash = []
        
#         while True:
#             sum = 0
#             while n != 0:
#                 digit = n % 10
#                 sum += digit*digit
#                 n = n // 10
#             if sum == 1:
#                 return True
#             if sum not in numHash:
#                 numHash.append(sum)
#             elif sum in numHash:
#                 return False   
#             n = sum 
              