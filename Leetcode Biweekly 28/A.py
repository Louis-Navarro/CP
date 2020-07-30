class Solution:
    def finalPrices(self, p):
        for i in range(len(p)):
            for i2 in range(i+1, len(p)):
                if p[i2] <= p[i]:
                    p[i] -= p[i2]
                    break
        return p
