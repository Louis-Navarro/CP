class Solution:
    def longestSubarray(self, ns):
        n=len(ns)
        zs=False
        m=0
        c=0
        for i in range(n):
            if ns[i]==1:
                c+=1
                m=max(m,c)
            elif i<n-1 and ns[i+1]==1:
                zs=True
                for j in range(i+1, n):
                    if ns[j]==1:
                        c+=1
                    else:
                        break
                m=max(m,c)
                c=0
            else:
                zs=True
                c=0
                
        return m if zs else m-1
