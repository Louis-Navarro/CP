class Solution:

    def __init__(self, rects: List[List[int]]):
        from random import randint, choice
        self.r=rects
        self.n=len(self.r)

    def pick(self) -> List[int]:
        c=choice(self.r);

        x = randint(c[0], c[2])
        y = randint(c[1], c[3])

        return [x, y]


# Your Solution object will be instantiated and called as such:
# obj = Solution(rects)
# param_1 = obj.pick()
