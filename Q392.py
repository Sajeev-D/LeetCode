class Solution(object):
    def isSubsequence(self, s, t):
          sSplit = list(s)
          tSplit = list(t)
          for i in range (len(s)):
               if(sSplit[i] in t):
               else:
                    return False
          return True
               



str = "ahbgdc"
print(len(str))

# This is how to convert a string into a character array
strSplit = list(str)
print(strSplit)

