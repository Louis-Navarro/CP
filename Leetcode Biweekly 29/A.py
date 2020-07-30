class Solution:
    def average(self, ss: List[int]) -> float:
        t=0
        mn=float('inf')
        mx=float('-inf')
        for s in ss:
            t+=s
            mn=min(s, mn)
            mx=max(s, mx)
        
        return (t-mn-mx) / (len(ss)-2)
