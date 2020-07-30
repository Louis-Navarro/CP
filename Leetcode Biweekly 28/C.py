class Solution:
    def minSumOfLengths(self, a, t):
        le=len(a)

        tl=an=0
        ptl=pan=0

        for l in reversed(range(1, le)):
            i=0
            for _ in range(le-l+1):   
                if i >= le:
                    break
                if sum(a[i:i+l]) == t:
                    an+=1
                    tl+=len(a[i:i+l])
                    i+=l
                    if an == 2:
                        return tl       
                    elif an-pan == 2:
                        return tl-ptl
                else:
                    i+=1


        ptl, pan =tl, an

        return -1
