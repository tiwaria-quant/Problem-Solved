class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        i = j = 0
        n1 = len(s)
        n2 = len(t)
        while i<n1 and j<n2:
            if s[i]==t[j]:
                i=i+1
            j=j+1
        return i==n1
        