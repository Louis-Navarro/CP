class Solution:
    def kthFactor(self, n: int, k: int) -> int:
        nF=0
        for i in range(1, n+1):
            if not n%i:
                nF+=1
            if nF==k:
                return i
        return -1
