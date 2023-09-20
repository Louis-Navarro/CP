import math


def get_odd(n):
    while True:
        if n%2:
            return n
        n//=2


def solve():
    n=int(input())
    c='Ashishgup'
    o='FastestFinger'

    while True:
        if n<=1:
            print(o)
            break
        if (n%2) or n==2:
            print(c)
            break
        if not n&n-1:
            print(o)
            break

        n//=get_odd(n)

        c,o=o,c
   

if __name__ == '__main__':
    t=int(input())
    for _ in range(t):
        solve()
